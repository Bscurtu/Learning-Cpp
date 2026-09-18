# 🟠 Phase 3: Advanced OOP, Memory Management & Modern C++

This phase refines object-oriented architectures by introducing modern C++ memory safety (RAII), abstract classes, and compile-time evaluations, ensuring zero memory leaks and highly scalable code.

---

## 🧠 Core Concepts

1. **Smart Pointers & RAII:**
   * Replacing raw pointers (`new`/`delete`) with `std::unique_ptr` and `std::make_unique` for strict ownership and automatic, leak-free memory deallocation.
2. **Abstract Classes & Pure Virtual Functions:**
   * Defining interfaces using pure virtual functions (e.g., `virtual void get_details() const = 0`), preventing the instantiation of the base class and forcing derived classes to implement specific behaviors.
3. **True Polymorphic Collections:**
   * Managing different derived objects (`DieselCar`, `PetrolCar`) through a single, unified container of base class pointers (`std::vector<std::unique_ptr<Car>>`).
4. **Compile-Time Evaluation:**
   * Utilizing `constexpr` and `std::string_view` to resolve operations (like converting Enums to Strings) at compile-time, reducing runtime overhead.
5. **Dependency Management:**
   * Mastering the compilation order using Forward Declarations (`class Name;`) in `.hpp` files and restricting `#include` directives to `.cpp` files to resolve circular dependencies.

---

## 🔥 Capstone Project: Smart Vehicle Inventory System

### Objective
Build a robust, leak-free vehicle management system leveraging modern C++ smart pointers, pure polymorphism, and compile-time optimizations.

### Requirements
1. **Abstract Base Class:** Design a `Car` base class with shared attributes (plate, seats, car body type) and a pure virtual method (`get_motor_name() = 0`) to enforce implementation in derived classes. Prevent code duplication by implementing common printing logic directly in the base class.
2. **Derived Specializations:** Create `DieselCar` and `PetrolCar` classes that inherit from `Car`. Use `override` to implement their specific engine types.
3. **Compile-Time Utilities:** Implement `constexpr std::string_view` functions to efficiently convert `DieselMotor` and `GasMotor` enumerations into readable strings.
4. **Unified Inventory System:** Build an `Inventory` class that manages all vehicle types via a single `std::vector<std::unique_ptr<Car>>`. 
5. **Safe Instantiation:** Implement factory-like creation methods (`create_car`) that validate input parameters before allocating new vehicles directly into the vector using `std::make_unique`.
6. **Basic error handling:** Trying and catching errors when trying to create cars and stopping the creation if
the parameters are not valid.