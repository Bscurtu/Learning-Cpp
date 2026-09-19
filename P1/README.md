# 🟢 Phase 1: C++ Fundamentals

This phase introduces core C++ syntax from a C programmer's perspective. The exercises remain procedural and do not yet use classes or object-oriented design.

## 🧠 Core Concepts

- Declaring variables close to where they are used
- Differences between C and C++ function declarations, including `f()`
- Stream I/O with `std::cin` and `std::cout`
- Pass-by-reference with `T&`
- Dynamic allocation with `new` and `delete`
- Array allocation and cleanup with `new[]` and `delete[]`

## 🔥 Main Exercise: Dynamic Matrix Manager

The matrix exercise uses `double**` and free functions to manage a dynamically allocated two-dimensional matrix without introducing a class.

### Requirements

1. Implement `createMatrix(double**& matrix, int rows, int columns)` using an array of row pointers.
2. Populate a matrix with values and implement operations such as transposition and multiplication where dimensions are compatible.
3. Implement `freeMatrix(double**& matrix, int rows)` to delete every row, delete the outer pointer array, and set `matrix` to `nullptr`.
4. Ensure that allocation failures and invalid dimensions do not leave partially allocated memory behind.

This exercise intentionally practices manual memory management. Later phases replace many of these responsibilities with RAII and standard library types.
