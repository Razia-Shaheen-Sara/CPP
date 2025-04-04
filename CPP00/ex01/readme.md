
# 📘 Intro to C++

### 🔹 Class vs Object

- **Class** = Blueprint  
  Defines **attributes** (data) and **methods** (functions).
- **Object** = A real thing created from a class  
  Has its own copy of the class’s attributes and can use its methods.

#### 🔧 Example:
```cpp
class Car {
    void honk() {
        std::cout << "Beep Beep!" << std::endl;
    }
};

int main() {
    Car myCar;        // Object
    myCar.honk();     // Method call
}
```

---

### 🔹 Metaphor
| Concept    | Example           |
|------------|-------------------|
| Class      | Car blueprint     |
| Object     | Real car (myCar)  |
| Attribute  | Brand, color      |
| Method     | honk(), start()   |
| Behavior   | What the method does (e.g., sound horn) |


# iostream Library in C++

## **`iostream`** Overview
- **Type**: Library
- **Purpose**: Provides facilities for input and output (I/O) operations in C++.
- **Included in**: `<iostream>`
  
## **Key Components**
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

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;  // Input from user

    std::cout << "Your age is: " << age << std::endl;  // Output to user
    return 0;
}

---

# ☎️ Mini PhoneBook Project (Steps)

1. **Define a `Contact` struct**  
   Stores: name, phone, nickname, darkest secret

2. **Create a `PhoneBook` class**  
   Stores 8 `Contact` objects  
   Has methods:
   - `addContact()`: Add new contact (replace oldest if full)
   - `searchContacts()`: Show list, allow lookup by index
