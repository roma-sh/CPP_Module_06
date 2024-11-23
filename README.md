# C++ Module 06 - Type Casting and Serialization

## Overview

This module explores **type casting** in C++, emphasizing best practices, precise conversions, and scenarios where explicit casting is necessary.
It also covers **serialization** and type identification using advanced concepts in C++.

---

## Casts and Cast Types in C++

Casting in C++ is the process of converting a variable from one type to another. C++ provides four primary types of casting to address various scenarios, each serving a specific purpose.

### **1. Static Cast**
- Used for compile-time type conversions.
- Suitable for conversions between related types (e.g., base and derived classes) and simple data types.
- Does not perform runtime type checking, so it must be used cautiously.

### **2. Dynamic Cast**
- Used for safely casting pointers and references in polymorphic types.
- Performs runtime type checking to ensure the conversion is valid.
- Returns `nullptr` for invalid conversions (in the case of pointers).

### **3. Const Cast**
- Used to add or remove the `const` qualifier from a variable.
- Should be used sparingly and only when necessary, as it can break const-correctness.

### **4. Reinterpret Cast**
- Used for low-level reinterpretation of bits without modifying the underlying data.
- Can be dangerous and is generally used for hardware-specific or performance-critical applications.

Each casting method should be chosen based on the scenario to ensure safety, maintainability, and adherence to modern C++ practices.

---

## Exercises

### **Exercise 00: Conversion of Scalar Types**

- **Objective:** Implement a class `ScalarConverter` to convert string representations of literals into scalar types (`char`, `int`, `float`, `double`).
- **Key Points:**
  - Handle pseudo-literals like `nan`, `+inf`, `-inf`, and their `float` variants.
  - Ensure the class is not instantiable and conversions are done via a static method.
  - Provide clear error messages for invalid or non-displayable conversions.

### **Exercise 01: Serialization**

- **Objective:** Create a `Serializer` class with static methods to convert pointers to integers and back.
- **Key Points:**
  - Implement serialization with `uintptr_t` for safe pointer-to-integer conversions.
  - Test the implementation to ensure data integrity.

### **Exercise 02: Identify Real Type**

- **Objective:** Identify the type of an object using base pointers or references.
- **Key Points:**
  - Implement a `Base` class and derive three classes `A`, `B`, and `C`.
  - Write functions `identify(Base* p)` and `identify(Base& p)` to print the type of the object.
  - Avoid using the `std::typeinfo` header and implement type detection manually.
