# Short Tutorial to begin CPP

### **Class, Object, and Behavior in C++**

#### **Class**  
A **class** is a blueprint for creating objects. It defines **attributes** (data) and **methods** (functions) that describe the behavior of the objects.

#### **Object**  
An **object** is an instance of a class. It has its own copy of the class's attributes and can call its methods.

#### **Behavior**  
- The **behavior** of an object is defined by the **methods** (functions) of its class.
- Methods define what the object can do (e.g., modifying data, interacting with other objects).

#### **Example:**

```cpp
#include <iostream>

class Car {
public:
    std::string brand;
    void honk() {
        std::cout << "Beep Beep!" << std::endl;  // Behavior: honk
    }
};

int main() {
    Car myCar;          // Object `myCar` of class `Car`
    myCar.brand = "Toyota";  // Setting an attribute
    myCar.honk();            // Calling a method (behavior)
    std::cout << myCar.brand << std::endl;  // Accessing an attribute
    return 0;
}

## std::cout
-To read about it:
 ``man 3 std::cout``
