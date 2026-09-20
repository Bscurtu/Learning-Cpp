#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstdio>

int main()
{
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd < 0) {
        perror("Error creating the socket");
        return 1;
    }
    
    int opt = 1;
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
        perror("Error in setsockopt");
        close(server_fd);
        return 1;
    }

    std::cout << "Socket correct\n";
    
    sockaddr_in address{};
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    if (bind(server_fd, reinterpret_cast<sockaddr*>(&address), sizeof(address)) < 0) {
        perror("Error in bind()");
        close(server_fd);
        return 1;
    }

    if (listen(server_fd, 5) < 0) {
        perror("Error in listen()");
        close(server_fd);
        return 1;
    }

    std::cout << "Waiting for connections 8080...\n";

    while (true)
    {
        int client_fd = accept(server_fd, nullptr, nullptr);
        if (client_fd < 0) {
            perror("Error en accept()");
            close(server_fd);
            return 1;
        }
        std::cout << "Client conected! " << client_fd << "\n";
        char buffer[1024] = {0};
        char http_response[] = "HTTP/1.1 200 OK Content-Length: 0";
            ssize_t bytes_received = recv(client_fd, buffer, sizeof(buffer) - 1, MSG_WAITALL);
            std::cout << "Got from client: " << buffer << "\n";
            send(client_fd, http_response, 170, 0);
            std::cout << "SENT: " << http_response;
        close(client_fd);
    }
    close(server_fd);
    return 0;
}