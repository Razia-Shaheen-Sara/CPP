# Intro to CPP

### **Class, Object, and Behavior in C++**

#### **Class**  
A **class** is a blueprint for creating objects. It defines **attributes** (data) and **methods** (functions) that describe the behavior of the objects.

#### **Object**  
An **object** is an instance of a class. It has its own copy of the class's attributes and can call its methods.

#### **Behavior**  
- The **behavior** of an object is defined by the **methods** (functions) of its class.
- Methods define what the object can do (e.g., modifying data, interacting with other objects).
### **Metaphor to Explain Class, Object, Attribute, Function, Method, and Behavior**

- **Class**: The blueprint that describes how the car will be built (structure and capabilities).
- **Object**: A **car** created using that blueprint. It's a specific instance of the blueprint.
- **Attributes**: The **features** of the car, like color, brand, and engine type. These are the **data** associated with the car (object).
- **Function**: The **actions** that can be performed on the car. For example, honking or accelerating. It's a **task** the car can do.
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
std::cout: Outputs data to the console.
std::endl: Adds a newline and flushes the output stream.
they do not need to be used together

## std::cout

-To read about it:
 ``man 3 std::cout``
