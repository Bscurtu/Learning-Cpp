# 🟢 Phase 1: Syntactic Transition ("C++ as an Enhanced C")

This phase marks the transition from pure C to fundamental C++ syntax without introducing classes or object-oriented structures yet.

---

## 🧠 Core Concepts

1. **Flexible Declarations & Typing:**
   * Variables can be declared anywhere inside a block right before usage.
   * Explicit casting is strictly enforced for `void*` pointers.
   * Argument-less functions are declared as `f()` instead of `f(void)`.
2. **Stream Input/Output:**
   * Replacing `printf` and `scanf` with `std::cin` and `std::cout` via `<iostream>`.
3. **Pass by Reference (`T&`):**
   * Direct variable aliases allowing parameter pass-by-reference without the heavy syntax of raw pointer dereferencing (`*`).
4. **Dynamic Memory Allocation (`new`/`delete`):**
   * Utilizing `new`, `delete`, and `delete[]` for dynamic block and array management instead of `malloc()` and `free()`.

---

## 📝 Practice Exercises

- [ ] **Swap by Reference:** Write a `void swap(int &a, int &b)` function that exchanges the values of two integers using references instead of pointers.
- [ ] **Dynamic Array with `new[]`:** Create a program that prompts for an integer $N$, dynamically allocates an array of $N$ floats using `new[]`, reads values with `cin`, and frees memory using `delete[]`.
- [ ] **I/O Refactoring:** Convert a C program using `struct Point` and `printf`/`scanf` into modern C++ syntax without prefixing the `struct` keyword during instantiation.

---

## 🔥 Capstone Project: Multidimensional Dynamic Matrix Manager

### Objective
Build a modular C++ system (without using C++ classes) that manages 2D dynamic matrices through pointers-to-pointers (`double**`) and pass-by-reference.

### Requirements
1. **Allocation:** Implement `void createMatrix(double** &m, int rows, int cols)` to dynamically allocate memory for an $N \times M$ matrix using dynamic pointer arrays and `new`.
2. **Operations:** Write functions to populate the matrix with random values, calculate the transposed matrix, and perform matrix multiplication on compatible dimensions.
3. **Deallocation:** Implement `void freeMatrix(double** &m, int rows)` to safely deallocate each row array and the outer pointer array using `delete[]`, setting the reference to `nullptr` to prevent dangling references.