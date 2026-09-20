# 🌐 simplesHtTP

A lightweight, dependency-free HTTP/1.1 static file server written from scratch in modern C++ (C++17) using low-level POSIX Linux Sockets.

This project was built as the capstone project for **Phase 5 (Systems Programming & Networking)** to demonstrate raw socket handling, binary I/O streams, HTTP protocol parsing, and response framing.
It can be compiled with the command "make" in the root of the project.

---
## ⚠️ Disclaimer & Project Scope

This project was built strictly for **educational purposes and personal growth** as part of a hands-on C++ roadmap.

- **Not Production-Ready:** It lacks advanced features required for production servers, such as asynchronous I/O (`epoll`/`kqueue`), multithreading, HTTPS/TLS encryption, and comprehensive HTTP request validation.
- **Educational Goal:** The primary objective was to understand low-level Linux POSIX sockets, raw binary streams, and manual protocol framing without relying on external libraries or frameworks.
-- **Is not complete:** things like "StatusCode" are enum to be easily adaptable to even more responses in the future.
---

## 📁 Project Structure

```text
simplesHtTP/
├── Makefile
├── README.md
├── www/
│   └── index.html          # Static Web Assets
└── src/
    ├── main.cc             # Application Entry Point
    ├── lib.hh              # Core Headers & Definitions
    └── network/
        ├── server_init.cc  # Socket Creation, Binding, & Listening
        ├── server_run.cc   # Connection Acceptance Loop & HTTP Parsing
        └── reponse/
            └── httpTemplate.hh # HttpResponse Abstraction & File Reader