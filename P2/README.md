# 🟡 Phase 2: Object-Oriented Programming (OOP) Fundamentals

This phase shifts the paradigm from procedural programming to object-oriented design, focusing on structuring data and behaviors into cohesive, reusable objects.

---

## 🧠 Core Concepts

1. **Encapsulation & Classes:**
   * Grouping data and methods using `class`.
   * Restricting internal access using `private` and exposing safe interfaces via `public` access modifiers.
2. **Constructors & Destructors:**
   * Using parameterized constructors and initialization lists to properly set up objects upon creation.
   * Understanding default virtual destructors for safe memory cleanup in class hierarchies.
3. **Basic Inheritance:**
   * Establishing "is-a" relationships (e.g., a `Library` *is a* `Store`, a `Fantasy` book *is a* `Book`).
   * Reusing code by extending base classes into specialized derived classes.
4. **Polymorphism & Virtual Functions:**
   * Using the `virtual` keyword in base classes and `override` in derived classes to allow dynamic method dispatch (e.g., calling the correct `get_details()` based on the actual object type).
5. **Operator Overloading:**
   * Redefining standard operators like `operator[]` to allow custom classes to behave intuitively like arrays.

---

## 🔥 Capstone Project: Polymorphic Bookstore Inventory

### Objective
Design an object-oriented inventory system that manages a hierarchy of bookstore items, demonstrating inheritance, dynamic dispatch, and custom operator overloading.

### Requirements
1. **Class Hierarchy:** Create a base `Book` class with core attributes (id, name, stock, author) and virtual methods for printing details. Derive specific genres like `Fantasy`, `Mystery`, and `Romance`.
2. **Polymorphic Behavior:** Override the `get_details()` method in the `Fantasy` class to include specific sub-genre enumerations (`High`, `Low`, `Urban`) using `switch` statements.
3. **Inventory Management:** Implement a `Stock` class that manages a `std::vector<Book*>` holding dynamically allocated books (`new`).
4. **Operator Overloading:** Overload the `operator[]` in the `Stock` class to allow fetching books directly by their index, implementing safe out-of-bounds checks in the main execution flow.