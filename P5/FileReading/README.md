# C1: File Reading and Writing in C++

This section explores how C++ interacts with files, from basic `std::cout` style output to low-level binary reads and writes.

## Topics covered
- Writing data to a file
- Reading data back from a file
- Using binary mode for raw byte storage
- Serializing custom structures
- Reading data without knowing size in advance

## Why this matters
Files are how programs store persistent data:
- configuration files
- logs
- assets and resources
- packets and network messages
- save states

## Core ideas
- Text files are easy for humans to read, but less efficient for raw data
- Binary mode is faster and more precise for numbers and custom structures
- `reinterpret_cast` is often used when reading/writing memory as bytes
- `std::ifstream::read()` and `std::ofstream::write()` are the most direct tools for binary I/O

This chapter is about learning how to move data efficiently between memory and disk.