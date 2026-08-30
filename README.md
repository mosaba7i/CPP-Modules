# C++ Modules Learning Path (CPP00 → CPP03)

A comprehensive C++ learning series covering fundamental OOP concepts, memory management, and advanced class design. All modules follow the **Orthodox Canonical Form** and **C++98** standard with `-Wall -Wextra -Werror` compilation flags.

---

## 📚 Module Overview

| Module | Focus | Key Concepts |
|--------|-------|--------------|
| **CPP00** | Basics & Classes | Class fundamentals, constructors/destructors, getters/setters |
| **CPP01** | Memory Management | Pointers, references, dynamic allocation, stack vs heap |
| **CPP02** | Operator Overloading | Const correctness, member operators, stream operators |
| **CPP03** | Inheritance | Class hierarchy, virtual inheritance, diamond problem |

---

## 🎯 CPP Module 00 — Namespaces, Classes & Member Functions

**Exercises:** ex00, ex01

### What We Learned

#### Exercise 00: Megaphone
- Simple string manipulation
- Basic C++ syntax and string handling
- Standard output (`std::cout`)

#### Exercise 01: PhoneBook & Contact System
A simple contact management system introducing **classes** and **encapsulation**.

**Key concepts:**
- **Class Definition**: Classes bundle data and functions together
- **Private & Public Members**: Hide implementation details while exposing interfaces
- **Constructors & Destructors**: Initialize and clean up resources
- **Getters & Setters**: Controlled access to member variables via member functions
- **Const Correctness**: Methods that don't modify the object marked as `const`

```cpp
class Contact {
private:
    std::string _firstName;
    std::string _lastName;
    // ...
public:
    Contact();
    void setFirstName(const std::string& name);
    const std::string& getFirstName() const;
};
```

**Key Takeaway:** Classes provide a way to organize data and behavior together, enforcing encapsulation through access control.

---

## 🎯 CPP Module 01 — Memory Allocation, References & Pointers

**Exercises:** ex00–ex05

### What We Learned

#### Exercise 00: Zombie Creation (new/delete)
- **Pointers**: Variables that store memory addresses
- **Dynamic Allocation**: Using `new` to allocate memory on the heap
- **Manual Deallocation**: Using `delete` to free heap memory
- **Stack vs Heap**: Stack objects live until the scope ends; heap objects live until `delete` is called

```cpp
Zombie* newZombie(std::string name) {
    return new Zombie(name);  // Allocated on heap
}
// Caller is responsible for delete
```

#### Exercise 01: Zombie Horde (array allocation)
- **Arrays on the Heap**: Using `new[]` and `delete[]` for multiple objects
- **Common Pitfall**: Using `delete` instead of `delete[]` causes memory leaks

```cpp
Zombie* zombieHorde(int n, std::string name) {
    return new Zombie[n];  // Must use delete[]
}
```

#### Exercise 02: References
- **References**: Non-copyable aliases that must be initialized at declaration
- **Difference from Pointers**: References cannot be null, reassigned, or uninitialized
- **Pass by Reference**: Avoid copying large objects; modify originals directly

```cpp
void setReference(int& ref) {
    ref = 42;  // Modifies the original
}
```

#### Exercise 03: Weapon & Humans (reference member)
- **Member References**: A class can have a reference as a member (must initialize in constructor)
- **Lifetime Dependency**: The object holding the reference must not outlive the referenced object
- **Use Cases**: Efficient passing of objects that must be modified and persist

```cpp
class HumanA {
private:
    Weapon& _weapon;  // Reference member
public:
    HumanA(const std::string& name, Weapon& weapon);
};
```

#### Exercise 04: File Manipulation (sed clone)
- **File I/O**: Reading and writing files using `std::ifstream` and `std::ofstream`
- **String Search & Replace**: Parsing file contents and substituting strings
- **Practical Application**: Creating a simple file processing tool

#### Exercise 05: Harl (switch vs if-else alternative)
- **Function Pointers**: Storing and calling functions dynamically
- **Alternative to Switch**: Using a pointer array to select functions
- **Efficiency**: Avoid long if-else chains with function pointers

**Key Takeaway:** Memory management is critical in C++. Understanding the difference between stack and heap, and managing pointers/references properly, prevents crashes and memory leaks.

---

## 🎯 CPP Module 02 — Ad-Hoc Polymorphism, Operators & Casts

**Exercises:** ex00–ex02

### What We Learned

#### Exercise 00: Fixed-Point Numbers (constructors & operators)
A class to represent fixed-point decimal numbers (e.g., `1.5` stored as an integer) with **operator overloading**.

**Key concepts:**
- **Constructors**: Default, parameterized, and copy constructors
- **Operator Overloading**: Redefining operators (`<<`, `>>`, `+`, `-`, etc.) for custom types
- **Const Correctness**: Marking methods that don't modify the object as `const`
- **Static Members**: Shared across all instances (e.g., `_fractionalBits`)

```cpp
class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed& other);
    ~Fixed();
    
    Fixed& operator=(const Fixed& other);
    bool operator<(const Fixed& other) const;
    std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};
```

#### Exercise 01: Fixed (conversion operators)
- **Conversion Operators**: `operator float()` and `operator int()` to convert to other types
- **Automatic Conversion**: Allows implicit casting (e.g., `float f = fixedNumber;`)
- **Stream Operators**: `operator<<` for output, `operator>>` for input

#### Exercise 02: Fixed (comparison & arithmetic)
All comparison and arithmetic operators:
- Comparison: `<`, `>`, `<=`, `>=`, `==`, `!=`
- Arithmetic: `+`, `-`, `*`, `/`
- Increment/Decrement: `++`, `--` (prefix and postfix)

```cpp
Fixed a(1.5f);
Fixed b(2.5f);
Fixed c = a + b;  // Fixed::operator+()
std::cout << c;   // Fixed::operator<<()
```

**Key Takeaway:** Operator overloading makes custom types feel like built-in types. Proper overloading improves code readability and intuition.

---

## 🎯 CPP Module 03 — Inheritance & Polymorphism

**Exercises:** ex00–ex02

### What We Learned

#### Exercise 00: Base Class (ClapTrap)
A simple base class demonstrating basic class structure and member functions.

```cpp
class ClapTrap {
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
public:
    ClapTrap(const std::string& name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
```

#### Exercise 01: Single Inheritance (ScavTrap & FragTrap)
- **Inheritance**: `ScavTrap` and `FragTrap` derive from `ClapTrap`
- **Protected Members**: Base class members declared `protected` are accessible in derived classes
- **Function Overriding**: Derived classes can override base class methods
- **Constructor/Destructor Chaining**: Base constructor runs before derived, destruction in reverse

```cpp
class ScavTrap : public ClapTrap {
public:
    ScavTrap(const std::string& name);
    void attack(const std::string& target);  // Override
    void guardGate();
};
```

**Constructor chaining:**
```cpp
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}
```

#### Exercise 02: Multiple Inheritance (DiamondTrap)
- **Multiple Inheritance**: A class can inherit from multiple base classes
- **The Diamond Problem**: Without virtual inheritance, a derived class could inherit the same base twice

```
       ClapTrap
      /        \
  ScavTrap   FragTrap
      \        /
    DiamondTrap
```

Without `virtual` inheritance, `DiamondTrap` would contain **two** separate `ClapTrap` bases. With virtual inheritance, there's only **one**.

**Solution: Virtual Inheritance**
```cpp
class ScavTrap : virtual public ClapTrap { /* ... */ };
class FragTrap : virtual public ClapTrap { /* ... */ };

class DiamondTrap : public ScavTrap, public FragTrap {
public:
    DiamondTrap(const std::string& name) 
        : ClapTrap(name), ScavTrap(name), FragTrap(name) {
        // ...
    }
};
```

**Key Takeaway:** Inheritance enables code reuse and creates hierarchies. Virtual inheritance solves the diamond problem in complex hierarchies.

---

## 🔑 Core C++ Concepts Across Modules

### 1. **Const Correctness**
- Mark methods that don't modify the object as `const`
- Prevents accidental modifications and enables passing `const` references

```cpp
const std::string& getFirstName() const;  // Can't modify *this
```

### 2. **Orthodox Canonical Form (OCF)**
Every class should have:
- **Default Constructor**: `Class();`
- **Copy Constructor**: `Class(const Class& other);`
- **Copy Assignment Operator**: `Class& operator=(const Class& other);`
- **Destructor**: `~Class();`

```cpp
class MyClass {
public:
    MyClass();                                 // Default
    MyClass(const MyClass& other);             // Copy
    MyClass& operator=(const MyClass& other);  // Assignment
    ~MyClass();                                // Destructor
};
```

### 3. **Access Control**
- `public`: Accessible from anywhere
- `private`: Only accessible within the class
- `protected`: Accessible within the class and derived classes

### 4. **Memory Management**
- **Stack**: Automatic cleanup when scope ends
- **Heap**: Manual cleanup required via `delete`
- **Rule of Five**: If you define a destructor, copy constructor, or assignment operator, define all five (add move constructor and move assignment for C++11+)

### 5. **Operator Overloading**
- Allows custom types to behave like built-in types
- Improves readability and intuitiveness
- Common overloads: `+`, `-`, `*`, `/`, `<`, `>`, `<<`, `>>`

---

## 📋 Compilation & Execution

### Compile individual exercises:
```bash
cd CPP00/ex00
make
./megaphone "Hello World"
```

### Or compile a specific module:
```bash
cd CPP00
make -C ex00
make -C ex01
```

### Compilation flags enforced:
```makefile
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
```

---

## 🎓 Learning Progression

1. **CPP00**: Understand classes, encapsulation, and basic member functions
2. **CPP01**: Master memory management, pointers, and references
3. **CPP02**: Practice operator overloading and type conversions
4. **CPP03**: Learn inheritance hierarchies and polymorphism

Each module builds on the previous, creating a solid foundation for advanced C++ concepts.

---

## 📌 Key Takeaways

| Module | Key Idea |
|--------|----------|
| CPP00 | **Classes organize data and behavior** |
| CPP01 | **Pointers and references enable flexible memory management** |
| CPP02 | **Operators make custom types feel natural** |
| CPP03 | **Inheritance enables code reuse and polymorphism** |

---

## 🔗 Resources

- **C++98 Standard**: All modules follow the 1998 C++ standard
- **Orthodox Canonical Form**: Essential for resource management
- **Include Guards**: Prevent multiple inclusions
- **Const Correctness**: Write safer, more predictable code

---

**Author**: Mohammed Al-Sabah  
**Completed**: August 2026  
**Standard**: C++98  
**Compilation**: `-Wall -Wextra -Werror`
