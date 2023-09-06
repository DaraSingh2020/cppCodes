# cppCodes
I've dedicated this repository to C++ sample problems. When it comes to programming, I rely on muscle memory. For instance, my fingers instinctively add a semicolon at the end of a C++ command and quickly tap the tab key when writing Python code. However, these nuances are just the tip of the iceberg in the comparison between C++ and Python. While C++ is a fully-fledged object-oriented programming language, Python attempts to emulate object-oriented programming principles to some extent. In this README section, I aim to provide a concise summary of their differences.

======================================= **Access Specifier** ======================================

In Python and C++, access specifiers are used to control the visibility and accessibility of class members (attributes and methods) from outside the class. While both languages serve the same fundamental purpose, they have different syntax and behavior when it comes to access specifiers:


**In Python, class members are considered public by default.**
Public members can be accessed from anywhere, both within and outside the class.


Python uses name mangling to create "pseudo-private" members with double underscores (__) as prefixes.
These members are not truly private but are meant to discourage direct access from outside the class.


Python doesn't have a strict mechanism for enforcing protected members.
Conventionally, single underscores (_) are used as a signal to developers that a member should be treated as protected, but this is not enforced by the language itself.


In C++, class members with the private access specifier are not accessible from outside the class.
Private members can only be accessed within the class itself.


In C++, class members with the protected access specifier are accessible within the class and its derived (child) classes.
Derived classes can access protected members of the base class.

In summary, while Python uses name mangling to provide a form of "pseudo-private" members and doesn't strictly enforce protected members, C++ offers explicit access specifiers (public, private, and protected) for controlling the visibility and accessibility of class members, making it more robust in terms of encapsulation and access control. Developers should be aware of the differences in how these languages handle access specifiers when designing and using classes.


======================================= **Virtualization** ======================================

Virtualization in programming languages like Python and C++ refers to the concept of defining and using virtual functions or methods, which allow polymorphic behavior and enable runtime method resolution for objects. While the core concept is similar, the implementation and syntax differ between the two languages. Here's a comparison of virtualization in Python and C++:

In C++, you use the virtual keyword to declare a method as virtual in the base class.

**Polymorphism:**

C++ uses dynamic dispatch to achieve runtime polymorphism through virtual functions.
Derived classes can override virtual functions, and the appropriate function is called based on the actual object type during runtime.

**Pure Virtual Functions:**

C++ supports pure virtual functions declared using virtual and = 0, which must be overridden by derived classes.


In Python, all functions are considered "virtual" by default, and you don't need any specific keyword to declare a virtual function.

**Polymorphism:**

Python achieves polymorphism through duck typing, meaning that the object's behavior is determined by its attributes and methods, rather than by explicit type declarations.
Any method can be overridden in derived classes without special keywords.

Abstract Base Classes:

Python has Abstract Base Classes (ABCs) from the abc module, which allow you to define abstract methods that must be implemented by concrete subclasses.

**Runtime Binding:**

Python uses dynamic dispatch to resolve method calls at runtime, similar to C++. The appropriate method is called based on the actual object type.
In summary, while both Python and C++ support the concept of virtualization and polymorphism, they have different syntax and mechanisms for achieving it. C++ requires the explicit use of the virtual keyword and provides stronger static typing, while Python relies on duck typing and does not require explicit virtual function declarations. Additionally, Python has Abstract Base Classes as a more formal way to define abstract methods and ensure their implementation in derived classes.
