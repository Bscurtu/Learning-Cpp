# Phase 5: File I/O and Data Persistence

This phase is focused on one of the most useful skills in C++: reading and writing files, handling binary data, and persisting structured information to disk.

## Main focus
- File input and output using `std::ifstream` and `std::ofstream`
- Binary vs text file operations
- Serialization of simple and complex data
- Reading raw bytes safely and efficiently
- Saving and restoring object-like data from files

## Learning goals
By the end of this phase, the goal is to understand:
- when to use text mode vs binary mode
- how `read()` and `write()` work
- how to store primitive types and custom structures
- how to reconstruct data from a file reliably

## Important note
Binary files are often the most efficient way to store C++ data, but they require care:
- use `std::ios::binary`
- be aware of endianness and padding
- avoid reading object memory blindly unless the structure is plain old data (POD) and layout is controlled

---

This folder is a practical introduction to real-world data handling, which is essential for game dev, networking, systems programming, and persistence.