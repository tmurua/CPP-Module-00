# CPP-Module-00

## Lessons Learned

1. **Objects in C++**:
   - `std::cout` is an object (not a function) representing the standard output stream.
   - Objects can replace functions like `printf` for cleaner, more modular code.

2. **Functions in C++**:
   - Functions like `std::toupper` are still used for specific tasks (e.g., character conversion).
   - C++ combines object-oriented programming (OOP) with traditional functions.

3. **Namespaces**:
   - The `std` namespace groups standard library features like `std::cout` and `std::toupper`.
   - Use `std::` to access these features unless brought into scope explicitly.

4. **Introduction to Classes**:
   - Although not explicitly used in this exercise, **classes** are blueprints for creating objects.
   - Objects like `std::cout` are instances of such classes.

5. **C++ Syntax Differences**:
   - Output uses `std::cout <<` instead of `printf` in C.
   - The `std::endl` manipulator adds a newline and flushes the stream.

6. **Memory Management**:
   - Unlike in C, `std::cout` abstracts details like buffer flushing and memory handling.
