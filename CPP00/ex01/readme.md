# Class
A **class** in C++ is similar to a **struct** in C, but with some differences:

-In C++, struct defaults to public, while class defaults to private.\
-In C, struct only holds data, while C++ class can have both data and functions.

### Private vs Public in a C++ Class

In C++, a **class** is a **blueprint** for creating objects. It defines **attributes (variables)** and **methods (functions)**.

#### **Access Specifiers:**
- **`private:`** (only accessible inside the class)
  - These members **cannot** be accessed directly from outside the class.
  - **Only the class itself** can access them.
  - They are usually variables

  
- **`public:`** (accessible from outside the class)
  - These members **can** be accessed from outside using an object.
  - They are usually functions

