# E1: Saving a Header to a Binary File

This example focuses on a small custom class called `Header` that stores:
- an ID
- a version
- a timestamp

The object is saved to a binary file and then reconstructed from that same file.

## What the program does
1. Creates a `Header` object
2. Saves it to a file using `write()`
3. Reads it back from the file using `read()`
4. Prints the loaded values

## Core concept
The class writes its raw memory to disk with:
```cpp
file_out.write(reinterpret_cast<char*>(this), sizeof(*this));