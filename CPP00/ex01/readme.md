
### 🔹 Class vs Object

- **Class** = Blueprint  
  Defines **attributes** (data) and **methods** (functions).
- **Object** = A real example/instance created from a class  
  Has its own copy of the class’s attributes and can use its methods.

---

### iostream Library in C++

- **Purpose**: Provides facilities for input and output (I/O) operations in C++. **Included in**: `<iostream>`
  
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

---

## **Namespaces**

A namespace is used within a library/header to organize and group related pieces of code, preventing **naming** conflicts. It works like a folder for classes/functions in a library or header file.
 **Example**
the **std::** part in the previous examples are namespace from the standard c++ library

### 🔧 What is a Constructor (in C++)?

A **constructor** is a special function in C++ that runs automatically when an object is created.  
It’s used to **initialize data members**. It can be private or public. 

---

**private data**
Some data should be private to control access, preventing direct modifications(setting wrong values) from outside the class.

### New concepts for the project:

1. The class **contact** should have private parts! It is not mentioned in the subject but the eval very clearly asks for that!
2. when we use private parts, those are not accessible from outside code. Then we need-----
3. 🔐 Getters and Setters
Private fields can't be accessed directly from outside the class.
We use:

Setters to assign values to private members
Example: setFirstName(string)

Getters to retrieve values
Example: getFirstName()

EDGE cases:

1. Field for a saved contact cannot be empty(according to subject)
2. EOF or ctrl+D cannot keep looping forever
3. Program should not accept garbage input after executable