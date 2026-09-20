#pragma once

enum class StatusCode {
    OK = 200,
    Forbidden = 403,
    NotFound = 404,
    InternalError = 500
};

constexpr std::string_view get_status_line(StatusCode status)
{
    switch (status)
    {
        case StatusCode::OK:            return "HTTP/1.1 200 OK\r\n";
        case StatusCode::NotFound:      return "HTTP/1.1 404 Not Found\r\n";
        default:                         return "HTTP/1.1 200 OK\r\n";
    }
}

class HttpResponse
{
public:
    StatusCode status{StatusCode::OK};
    std::string content;

    HttpResponse() = default;
    HttpResponse(StatusCode s) : status(s) {};

    std::string serialize(std::string filename)
    {
        content = std::move(get_content(filename));
        std::string response;
        response += get_status_line(status);
        if (content.empty())
            return "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\nContent-Length:48\r\n\r\n<html><body><h1>404 Not Found</h1></body></html>";
        response += "Content-Type: text/html\r\n";
        response += "Content-Length: " + std::to_string(content.length()) + "\r\n";
        response += "\r\n";
        response += content;
        return response;
    }

    std::string get_content(std::string filename) const
    {
        std::string file;
        file += "www/";
        file += filename;
        std::ifstream file_in(file, std::ios::binary);
        if (!file_in.is_open()) {
            return "";
        }
        file_in.seekg(0, std::ios::end);
        size_t size = file_in.tellg();
        file_in.seekg(0, std::ios::beg);
        std::string str(size, '\0');
        file_in.read(&str[0], size);
        file_in.close();
        return str;
    };
};