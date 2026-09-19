
## 📜 Rule of five:

This rule is a guide that if a program has one or more of the special RAII
functiones, all five of them MUST be added.

Complying with it ensures proper copy, move, and destruction of special resources (sockets, files...).

## This is a brief overview:

1. Destructor:
Destroys the objects' resources once they get out of scope.
---
class ClassName {
public:
    ~ClassName() {
        // Release allocated resources
    }
};
---

2. Copy constructor:
Used to make new objects by gathering the data from other that already exists.
---
class ClassName {
public:
    ClassName(const ClassName& other) {
        // Deep copy resources
    }
};
---

3. Copy assignment Operator:
Used when the '=' assignment between two objects is used.
---
class ClassName {
public:
    ClassName& operator=(const ClassName& other) {
        if (this != &other) {
            // Deep copy resources
        }
        return *this;
    }
};
---

4. Move constructor:
Transfer ownership of resources to another object.
---
class ClassName {
public:
   ClassName(ClassName&& other) noexcept {
       // Transfer ownership
    }
};
---

5. Move assignment opperator:
Is used to assign temporary data to the object
---
class ClassName {
public:
   ClassName& operator=(ClassName&& other) noexcept {
        if (this != &other) {
            // Transfer ownership
       }
        return *this;
    }
};
---