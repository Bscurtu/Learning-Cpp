# 🔴 Phase 4: Modern C++ — Lambdas, Move Semantics & Resource Management

This phase introduces modern C++ techniques for writing expressive, efficient, and resource-safe programs. The focus shifts toward functional-style operations, ownership transfer, and designing classes that correctly manage dynamically allocated resources.

---

## 🧠 Core Concepts

1. **Lambda Expressions & Captures:**
   * Creating anonymous functions directly where they are needed.
   * Capturing local variables by value (`[i]`) or by reference (`[&]`).
   * Building reusable predicates for filtering collections and searching log messages.

2. **STL Algorithms & Generic Predicates:**
   * Combining lambdas with algorithms such as `std::for_each`.
   * Passing predicates as parameters to create flexible filtering and searching utilities.
   * Using generic lambda parameters with `auto`.

3. **Copy Semantics:**
   * Understanding how objects are copied when resources are owned manually.
   * Implementing deep copies so separate objects do not share the same dynamically allocated memory.

4. **Move Semantics:**
   * Transferring ownership of resources instead of copying them.
   * Using move constructors and move-assignment operators to improve performance.
   * Resetting moved-from objects into safe, valid states.

5. **The Rule of Five:**
   * Implementing the destructor, copy constructor, copy-assignment operator, move constructor, and move-assignment operator when a class owns a resource.
   * Preventing memory leaks, double deletion, and dangling pointers.

6. **Resource Ownership & RAII:**
   * Connecting the lifetime of dynamically allocated resources to the lifetime of objects.
   * Ensuring resources are released automatically when their owning objects are destroyed.

---

## 🔥 Capstone Project: Efficient Data Processing Pipeline

### Objective
Build a resource-conscious data-processing system that collects, stores, and transfers large amounts of data while demonstrating lambdas, copy semantics, move semantics, and the Rule of Five.

### Requirements
1. **Lambda Utilities:** Create reusable lambda-based functions for filtering collections and searching log messages using different predicates.
2. **Data Collection:** Implement a sensor-like class that stores a large set of generated data values.
3. **Copying Data:** Implement a processing class that can copy data from the sensor while keeping the original data unchanged.
4. **Moving Data:** Implement a separate operation that transfers the sensor data into the processor using move semantics instead of copying every element.
5. **Resource Management:** Create a resource-owning class, such as `NetworkPacket`, that dynamically allocates a payload and correctly implements all five special member functions.
6. **Safe Ownership Transfer:** Ensure that moved-from objects no longer own the transferred resource and remain valid to destroy or reuse.
7. **Performance Comparison:** Demonstrate the difference between copying and moving a large data collection by processing a substantial number of values.

```
