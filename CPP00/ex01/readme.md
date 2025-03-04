# Class
In C++, a **class** is a **blueprint** for creating objects. It defines **attributes (variables)** and **methods (functions)**.\
A **class** in C++ is similar to a **struct** in C, with some differences:

-In C++, struct defaults to public, while class defaults to private.\
-In C, struct holds variables and function pointers, while C++ class can have both data and functions.

### Private vs Public in a C++ Class

- **`private:`** (only accessible inside the class)
  - Accessible only inside the class. Usually variables but can also be helper functions.

  
- **`public:`** (accessible from outside the class)
  - Accessible from outside the class using an object. Usually functions, but variables can be public (though it's not recommended for encapsulation).

It is defined in header files. basic structure will look like this
```cpp
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>  // For std::cout, std::cin
#include <string>    // For std::string

class Contact {
	private:
		std::string name;  // Private variable

	public:
		void setName(std::string new_name)  // Public function
		std::string getName()  // Public function
			
};

#endif
```
# Beginner's Libraries with example functions
- iostream : 10+ (e.g., std::cout, std::cin, std::cerr, std::getline(), etc.)
- fstream   : 5-10 (e.g., std::ifstream, std::ofstream, std::fstream, open(), close(), getline(), etc.)
- string : 20+ (e.g., std::string::length(), std::string::substr(), std::string::find(), std::string::c_str(), etc.)
- cstdlib : 10+ (e.g., atoi(), exit(), malloc() (NOT ALLOWED), free() (NOT ALLOWED), rand(), etc.)
- cmath :  20+ (e.g., sqrt(), pow(), sin(), cos(), abs(), etc.)

# Steps
### 1. Define a Contact Class:
This class stores details about a contact, such as name, phone number, etc.

### 2. Define a PhoneBook Class:
This class manages multiple contacts.
It should allow you to add new contacts and search for existing contacts.
