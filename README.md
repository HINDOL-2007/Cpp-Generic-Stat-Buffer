# 🧬 C++ Generic Stat Buffer

## 📖 About the Project
This project explores the foundation of Generic Programming in C++ using templates. Instead of utilizing function or class overloading to handle different data types redundantly, this architecture defines a single generic class blueprint. The compiler dynamically generates the appropriate class structure at runtime based on the data type passed during instantiation.

## ✨ Features
*   **Template Metaprogramming:** Utilizes `template <class T>` to abstract the data types of class variables and methods.
*   **Dynamic Type Handling:** Seamlessly executes arithmetic addition for numeric types (`int`, `float`) and string concatenation for text (`string`) using the exact same `getBoostedStat()` method.
*   **Memory Efficiency:** Eliminates repetitive code blocks, keeping the codebase DRY (Don't Repeat Yourself) while maintaining strict type safety.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Templates, Generic Programming, Dynamic Type Inference.
