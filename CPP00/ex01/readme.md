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
```
#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
	private:

	public:

};

#endif
```
