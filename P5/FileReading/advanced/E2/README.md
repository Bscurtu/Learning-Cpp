
```markdown name=P5/C1/file_reading/advanced/E2/README.md
# E2: Packet Serialization with Metadata

This example builds a more realistic serialized object called `Packet`.

## Structure
The packet contains:
- a header with:
  - ID
  - version
  - payload size
- a string payload (`info`)

The program saves:
1. the metadata header
2. then the actual string bytes

Then it reconstructs the packet by reading the header first and resizing the string accordingly.

## Why this is a good example
This introduces a very common pattern in binary formats:
- write metadata first
- read metadata first
- then read the payload according to the length stored in the header

## Important idea
The packet size is stored in the header so the program knows how many bytes to read for the message text.

```cpp
file.write(reinterpret_cast<const char*>(&header), sizeof(Header));
file.write(info.data(), header.size);