# 🟡 Phase 2: Object-Oriented Programming Fundamentals

This phase moves from procedural programming to object-oriented design by grouping data and behavior into classes and using inheritance for specialization.

## 🧠 Core Concepts

- Encapsulation with `private` and `public` members
- Constructors, member initialization, and destructors
- Inheritance and “is-a” relationships
- Virtual functions and runtime polymorphism
- Virtual destructors in polymorphic base classes
- Operator overloading, including `operator[]`

## 🔥 Main Exercise: Polymorphic Bookstore Inventory

The bookstore exercise models books with a base `Book` class and specialized genres such as `Fantasy`, `Mystery`, and `Romance`.

### Requirements

1. Define a base `Book` class containing common information such as title, author, quantity, and identifier.
2. Derive genre-specific classes from `Book` and override behavior where appropriate.
3. Use a virtual destructor so derived books can be destroyed through a `Book*`.
4. Store polymorphic books in a `Stock` collection and access them with `operator[]`.
5. Check indices before access, or use a bounds-checked operation such as `std::vector::at()`.

The current exercise uses raw pointers to make ownership and polymorphism visible. That also means the owner of each allocated book must eventually delete it; later phases demonstrate safer ownership with smart pointers.

## Other Exercises

The directory also contains smaller class and inheritance examples that support the concepts above.
