#include "../lib.hh"
#include <iostream>
#include <unistd.h>
#include <sys/socket.h>

void server_run(int server_fd)
{
    HttpResponse res(StatusCode::OK);

    if (listen(server_fd, 5) < 0) {
        perror("Error in listen()");
        close(server_fd);
        return;
    }

    std::cout << "Waiting for connections on port 8080...\n";
    while (true)
    {
        int client_fd = accept(server_fd, nullptr, nullptr);
        if (client_fd < 0) {
            perror("Error in accept()");
            continue;
        }

        char buffer[1024] = {0};
        ssize_t bytes_read = read(client_fd, buffer, sizeof(buffer) - 1);
        if (bytes_read < 0) {
            perror("Error in read()");
            close(client_fd);
            continue;
        }

        char method[16] = {0};
        char path[256] = {0};

        if (sscanf(buffer, "%15s %255s", method, path) == 2) {
            if (strstr(path, "..")) {
                HttpResponse err_res(StatusCode::Forbidden);
                std::string raw_res = "HTTP/1.1 403 Forbidden\r\nContent-Type: text/html\r\nContent-Length: 48\r\n\r\n<html><body><h1>403 Forbidden</h1></body></html>";
                send(client_fd, raw_res.data(), raw_res.size(), 0);
                close(client_fd);
                continue;
            }
            else if (strcmp(path, "/") == 0 || strcmp(path, "") == 0) {
                strcpy(path, "/index.html");
            }
            printf("Requested file relative path: %s\n", path);
        }

        std::string raw_res = res.serialize(path);
        ssize_t bytes_sent = send(client_fd, raw_res.data(), raw_res.size(), 0);
        if (bytes_sent < 0) {
            perror("Error in send()");
        } else {
            std::cout << "SENT (" << bytes_sent << " bytes):\n" << raw_res << "\n";
        }
        close(client_fd);
    }

    close(server_fd);
}