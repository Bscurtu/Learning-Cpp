# 🟣 Phase 5: Systems Programming, Binary I/O, and Networking

Welcome to **Phase 5**. This module transitions from standard in-memory C++ programming to low-level Linux systems programming, raw memory manipulation, binary file handling, and network socket communication.

The goal of this phase is to understand how C++ interacts directly with the operating system kernel, disk storage, and network interfaces using POSIX APIs and standard binary streams.

---

## 🎯 Key Learning Objectives

1. **Binary Stream I/O & Memory Layout:**
   - Writing and reading raw bytes directly to/from disk using `std::ofstream` and `std::ifstream` in `std::ios::binary` mode.
   - Using `reinterpret_cast` to inspect memory layouts and bypass text-formatting overhead.
   - Dynamic file size calculation using stream cursors (`seekg` and `tellg`).

2. **Binary Framing & Serialization:**
   - Understanding POD (Plain Old Data) structs versus heap-allocated types (`std::string`, `std::vector`) during memory dumps.
   - Implementing binary data framing: Fixed-size `Header` (metadata) + Variable-length `Payload` (dynamic content).
   - Safe deserialization using two-phase reading.

3. **Linux Network Programming (POSIX Sockets):**
   - Understanding the *"Everything is a file"* paradigm in Linux (File Descriptors).
   - Setting up a TCP server lifecycle: `socket()`, `setsockopt()` (`SO_REUSEADDR`), `bind()`, `listen()`, `accept()`.
   - Managing stream I/O over network interfaces with `recv()` (`MSG_WAITALL`) and `send()`.
   - Distinguishing between listening sockets (`server_fd`) and connection sockets (`client_fd`).

---

## 📂 Topic Breakdown & Code Progression

### 1. Binary I/O and Dynamic File Measurement (`01_binary_io/`)
- Demonstrates byte-level file persistence using `<fstream>`.
- Calculates exact file byte lengths dynamically:
  ```cpp
  file.seekg(0, std::ios::end);
  size_t size = file.tellg();
  file.seekg(0, std::ios::beg);