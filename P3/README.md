# 🟠 Phase 3: Advanced OOP and Generic Programming

This phase builds on object-oriented fundamentals with safer ownership, abstract interfaces, generic code, compile-time utilities, and exception handling.

## 🧠 Core Concepts

1. **RAII and smart pointers**
   - Use `std::unique_ptr` and `std::make_unique` to express exclusive ownership and release resources automatically.
2. **Abstract classes and pure virtual functions**
   - Define interfaces with pure virtual functions and prevent direct construction of incomplete base types.
3. **Polymorphic collections**
   - Store different derived vehicle types in `std::vector<std::unique_ptr<Car>>`.
4. **Compile-time utilities**
   - Use `constexpr` and `std::string_view` for small conversions that can be evaluated at compile time.
5. **Templates**
   - Write reusable function and class templates, including a simple stack and lookup utility.
6. **Exceptions**
   - Validate input and report invalid operations with standard exceptions such as `std::invalid_argument` and `std::out_of_range`.
7. **Header dependencies**
   - Use forward declarations when a declaration is sufficient, and include complete definitions where they are required.

## 🔥 Main Exercise: Smart Vehicle Inventory

The dealership exercise defines an abstract `Car` interface with concrete diesel and petrol implementations. An `Inventory` stores the vehicles through `std::unique_ptr<Car>` and validates input before creating them.

### Requirements

- Define shared vehicle data in an abstract base class.
- Implement `DieselCar` and `PetrolCar` with `override` methods.
- Convert motor enumerations to text with `constexpr std::string_view` utilities.
- Create vehicles with `std::make_unique` and store them in one polymorphic collection.
- Throw and handle an exception when input is invalid.

The `templates.hpp` file contains separate practice exercises for function templates, class templates, searching, and bounds-checked access.
