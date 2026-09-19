# 🔴 Phase 4: Modern C++

This phase explores expressive algorithms, lambda expressions, move semantics, RAII, and manual resource ownership.

## 🧠 Core Concepts

1. **Lambda expressions and captures**
   - Write local functions and capture values or references from the surrounding scope.
2. **STL algorithms and predicates**
   - Combine lambdas with algorithms such as `std::for_each` and `std::transform`.
3. **Copy semantics**
   - Understand when an object is copied and how an owning class performs a deep copy.
4. **Move semantics**
   - Transfer ownership instead of copying resources, using move constructors, move assignment, and `std::move`.
5. **The Rule of Five**
   - Define or explicitly delete the destructor, copy constructor, copy-assignment operator, move constructor, and move-assignment operator when manual ownership requires it.
6. **RAII**
   - Tie resource lifetime to object lifetime so resources are released automatically.

## 📁 Exercises

- [`lambdas/`](lambdas/) contains lambda syntax, captures, generic predicates, filtering, and searching examples.
- [`data_pipeline/`](data_pipeline/) contains a move-enabled byte-buffer pipeline built with STL algorithms.
- [`movement/`](movement/) demonstrates transferring ownership between objects.
- [`rule_of_five/`](rule_of_five/) contains a manually managed `NetworkPacket` and a short Rule of Five guide.

## 🔥 Data-Processing Pipeline

The pipeline accepts a buffer, applies processing stages, and returns the processed buffer. The buffer is transferred with move semantics so ownership can change without copying every element.

A moved-from object must remain valid and safe to destroy or reuse. The Rule of Five exercise demonstrates how to maintain that guarantee when a class owns a dynamically allocated payload.

## 🚀 Build an Example

From the repository root:

```bash
g++ -std=c++17 -Wall -Wextra P4/lambdas/examples.cpp -o lambdas
./lambdas

g++ -std=c++17 -Wall -Wextra P4/data_pipeline/main.cpp -o data_pipeline
./data_pipeline
