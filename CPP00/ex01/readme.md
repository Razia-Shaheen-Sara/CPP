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
		void setName(std::string new_name) {  // Public function
			name = new_name;
		}

		std::string getName() {  // Public function
			return name;
		}
};

#endif
```
