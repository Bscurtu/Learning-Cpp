## 📚 About This Repository

This repository documents my personal journey toward mastering C++.

The code here is not intended to represent production-quality software, nor is it continuously refactored to follow the latest best practices. Each exercise reflects my understanding at the time I wrote it and is part of my progression as I learn the language.

Some solutions may be incomplete, inefficient, or use approaches that would not normally be recommended in production code. That is intentional. The purpose of this repository is to practice concepts, explore how C++ works, learn from mistakes, and build a stronger foundation over time.

I am keeping the exercises and their original implementations as a record of my learning process—not just as a collection of ideal solutions, I personally appreciate seeing how, through the practice and time, the code gets better and cleaner.
Right now MakeFiles are not included as most exercises are not meant to be any app or feature, just specific and topic focused code to learn.
While doing this path, I found out lots of things appart from what's in this Readme, specially while encountering problems with compilation. This repo is not intended to be any guide for others, just my little corner with code that improves quickly and I will always have access to have a look and remember the topics and details. Thanks for reading this!!

## 🗺️ Learning Roadmap

### 🟢 Phase 1: C++ Fundamentals

Transitioning from C-style programming to core C++ syntax and resource handling.

- Stream I/O with `std::cin` and `std::cout`
- Pass-by-reference with `T&`
- Dynamic memory with `new`, `delete`, `new[]`, and `delete[]`
- Matrix allocation, transposition, multiplication, and cleanup

See [`P1/README.md`](P1/README.md).

### 🟡 Phase 2: Object-Oriented Programming

Structuring data and behavior with classes and inheritance.

- Encapsulation, constructors, and destructors
- Inheritance and virtual functions
- Runtime polymorphism
- Operator overloading
- A polymorphic bookstore inventory exercise

See [`P2/README.md`](P2/README.md).

### 🟠 Phase 3: Advanced OOP and Generic Programming

Applying RAII, smart pointers, templates, and exception handling.

- Abstract classes and pure virtual functions
- `std::unique_ptr` and `std::make_unique`
- Polymorphic collections
- `constexpr` and `std::string_view`
- Function and class templates
- Basic exception handling

See [`P3/README.md`](P3/README.md).

### 🔴 Phase 4: Modern C++

Exploring expressive algorithms, lambdas, move semantics, and manual resource ownership.

- Lambda expressions and captures
- STL algorithms and generic predicates
- Copy and move semantics
- The Rule of Five
- RAII and resource ownership
- A move-enabled data-processing pipeline

See [`P4/README.md`](P4/README.md).

### 🟣 Phase 5: Systems Programming, Binary I/O, and Networking

Handling raw binary streams, memory serialization, and low-level Linux network programming.

- Binary I/O streams using `std::ifstream` and `std::ofstream`
- Raw byte manipulation with `std::uint8_t` and `reinterpret_cast`
- Dynamic file size calculation using `seekg()` and `tellg()`
- Binary serialization and deserialization (Fixed-size Header + Variable-length Payload pattern)
- Low-level Linux network programming with POSIX TCP Sockets (`socket`, `bind`, `listen`, `accept`)

See [`P5/README.md`](P5/README.md).

## 🚀 How to Build and Run an Example

A C++17-compatible compiler is recommended. For example:

```bash
g++ -std=c++17 -Wall -Wextra P4/lambdas/examples.cpp -o examples
./examples
