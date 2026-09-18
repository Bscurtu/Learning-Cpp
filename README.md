## 📚 About This Repository

This repository documents my personal journey toward mastering C++.

The code here is not intended to represent production-quality software, nor is it continuously refactored to follow the latest best practices. Each exercise reflects my understanding at the time I wrote it and is part of my progression as I learn the language.

Some solutions may be incomplete, inefficient, or use approaches that would not normally be recommended in production code. That is intentional. The purpose of this repository is to practice concepts, explore how C++ works, learn from mistakes, and build a stronger foundation over time.

I am keeping the exercises and their original implementations as a record of my learning process—not just as a collection of ideal solutions.

## 🗺️ Learning Roadmap

### 🏁 Phase 1: Syntactic Transition ("C++ as an Enhanced C")
*Transitioning from C to idiomatic C++ fundamentals.*
- Stream I/O (`std::cin`, `std::cout`, `<iostream>`).
- Pass-by-reference (`T&`) to eliminate heavy pointer syntax.
- Dynamic memory management using `new`/`delete` and `new[]`/`delete[]`.
- **Capstone Exercise:** Modular Dynamic Multidimensional Matrix Memory Manager.
- Get used to the little differences between C and CPP

---

### 🧱 Phase 2: Object-Oriented Programming (OOP)
*Structuring software with encapsulation, polymorphism, and operator overloading.*
- Classes, access specifiers (`private`, `protected`, `public`), constructors, and destructors.
- Operator overloading (`operator[]`, `operator+`, `operator<<`).
- Inheritance, virtual functions, and dynamic polymorphism (`virtual`, `= 0`).
- **Capstone Exercise:** Polymorphic Vehicular Traffic Simulation System with dynamic fleet management.

---

### 🛡️ Phase 3: Generic Programming & Robustness
*Writing reusable, high-performance, and error-tolerant C++ code.*
- Function & Class Templates (`template <typename T>`).
- Structured exception handling (`try`, `catch`, `throw`, custom exception classes).
- Standard Template Library (STL) basics (`std::vector`, `std::string`, iterators, algorithms).
- **Capstone Exercise:** Generic Binary Search Tree (BST) with Custom Exceptions & STL Integration.

---

### ⚡ Phase 4: Modern C++ Mastery (C++11 / C++14)
*Leveraging modern C++ standard features for memory safety and zero-cost abstractions.*
- Type inference (`auto`), uniform initialization (`{}`), and `nullptr`.
- Smart Pointers (`std::unique_ptr`, `std::shared_ptr`, `std::make_unique`) for strict RAII.
- Move Semantics, Rvalue references (`T&&`), and resource transferring with `std::move`.
- Anonymous Lambda functions and STL algorithm callbacks.
- **Capstone Exercise:** High-Performance Data Processing Pipeline utilizing RAII & Move Semantics.

---

## 🚀 How to Build & Run
To compile and test the code snippets in this repository, a C++14 (or later) compliant compiler is required (e.g., `g++` or `clang++`).

```bash
# Example compilation command using C++14 standard
g++ -std=c++14 -Wall -Wextra main.cpp -o program
./program
