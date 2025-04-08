
# 📘 Intro to C++

### 🔹 Class vs Object

- **Class** = Blueprint  
  Defines **attributes** (data) and **methods** (functions).
- **Object** = A real example/instance created from a class  
  Has its own copy of the class’s attributes and can use its methods.

---


# iostream Library in C++

- **Type**: Library
- **Purpose**: Provides facilities for input and output (I/O) operations in C++.
- **Included in**: `<iostream>`
  
## **Example Components**
1. **`std::cin`**: 
   - Type: Input stream object (instance of `std::istream`).
   - Purpose: Used to receive input from the user (keyboard).
   - Example:
     ```cpp
     int age;
     std::cin >> age;  // Reads an integer from the user
     ```
   
2. **`std::cout`**: 
   - Type: Output stream object (instance of `std::ostream`).
   - Purpose: Used to output data to the console (screen).
   - Example:
     ```cpp
     std::cout << "Hello, world!" << std::endl;  // Outputs to the console
     ```

3. **`std::cerr`**:
   - Type: Output stream object (instance of `std::ostream`).
   - Purpose: Used for error messages, output to standard error stream.
   - Example:
     ```cpp
     std::cerr << "Error occurred!" << std::endl;  // Error message to stderr
     ```

4. **`std::clog`**:
   - Type: Output stream object (instance of `std::ostream`).
   - Purpose: Used for logging messages, typically to standard error.
   - Example:
     ```cpp
     std::clog << "Logging information..." << std::endl;  // Logs message
     ```

---

## **Key Features**
- **Stream-based I/O**: C++ handles I/O through streams, which are sequences of characters flowing in and out of programs.
- **Formatted I/O**: You can manipulate the format of input/output using manipulators like `std::setw`, `std::fixed`, etc.
- **Type Safety**: **`std::cin`** and **`std::cout`** automatically manage types (e.g., reading integers as integers).

---

## **Example of Usage**
```cpp
#include <iostream>

int main() 
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;  // Input from user

    std::cout << "Your age is: " << age << std::endl;  // Output to user
    return 0;
}
```
---

### **Namespaces** in a Library

A namespace is used within a library/header to organize and group related pieces of code, preventing **naming** conflicts. It works like a folder for classes/functions in a library or header file.

## **Example**
the std:: part in the previous examples are namespace from the standard c++ library

### 🔧 What is a Constructor (in C++)?

A **constructor** is a special function in C++ that runs automatically when an object is created.  
It’s used to **initialize data members**. It can be private or public. 

---

Some data should be private to control access, preventing direct modifications(setting wrong values) from outside the class.

EDGE cases:

1. Field for a saved contact cannot be empty(according to subject)
2. EOF or ctrl+D cannot keep looping forever
3. Program should not accept garbage input after executable