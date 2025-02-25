# Intro to CPP

### **Class and Object in C++**

#### **Class**  
A **class** is a blueprint for creating objects. It defines **attributes** (data) and **methods** (functions) that describe the behavior of the objects.

#### **Object**  
An **object** is an instance or product made of a class. It has its own copy of the class's attributes and can call its methods.

### **Metaphor to Explain**

- **Class**: The blueprint that describes how the car will be built (structure and capabilities).
- **Object**: A **car** created using that blueprint. It's a specific instance of the blueprint.
- **Attributes**: The **features** of the car, like color, brand, and engine type. These are the **data** associated with the car (object).
- **Method**: A function that is defined inside the **car blueprint** (class). It's the action available to any car (object).
- **Behavior**: The **result** of performing actions on the car. For instance, when the car **honk** method is called, the behavior is the sound of the horn.

#### Example in Code:

```cpp
class Car {  // Blueprint (Class)

    void honk() {  // Method: Function to make the car honk
        std::cout << "Beep Beep!" << std::endl;//**`std::cout`** is an **object** of the `std::ostream` class
    }
};

int main() {
    Car myCar;  // Object: A specific car created from the blueprint
    myCar.brand = "Toyota";  // Setting an attribute: The car's brand
    myCar.honk();  // Calling a method: The car honks (Behavior)
}
```
std::cout: Outputs data to the console.\
std::endl: Adds a newline and flushes the output stream.\
They do not need to be used together\
The `<<` operator is known as the **stream insertion operator**. It is used to send data into an **output stream**, such as `std::cout`.

Manual:
 ``man 3 std::cout``

 ``std::cout << " ";  // Prints a single space``
 ``std::cout << ' ';  // Prints a single space (character)``
 
 If you don't use quotes, the compiler interprets the space as a separator between different arguments or commands, not as a character to print.


