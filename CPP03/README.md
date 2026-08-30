//mohammed
# C++ Module 03 — Inheritance

This project solves **CPP Module 03 (ex00 → ex03)** and focuses on inheritance, constructor/destructor chaining, overriding member functions, multiple inheritance, and the diamond problem.

The subject requires C++98, `-Wall -Wextra -Werror`, Orthodox Canonical Form for classes, independent headers with include guards, and no function implementations inside headers. The exercises build from `ClapTrap`, then add `ScavTrap`, `FragTrap`, and finally `DiamondTrap`. See the supplied Module 03 subject, especially the exercise requirements on pages 8–13.

## What we learned

### 1. Basic inheritance
`ScavTrap` and `FragTrap` derive from `ClapTrap`.

```cpp
class ScavTrap : virtual public ClapTrap
```

A derived class automatically gets the accessible members of its base class. The base constructor runs **before** the derived constructor, and destruction happens in the opposite order.

### 2. `protected` members
`ClapTrap` stores `_name`, `_hitPoints`, `_energyPoints`, and `_attackDamage` as `protected` so derived classes can initialize/change them directly while outside code still cannot access them.

### 3. Function overriding
`ScavTrap` defines its own `attack()` with the same signature as `ClapTrap::attack()`.

This means a `ScavTrap` object uses the `ScavTrap` attack behavior while still sharing the common state and damage/repair logic inherited from `ClapTrap`.

### 4. Constructor/destructor chaining
Creating a `ScavTrap` or `FragTrap` first constructs the `ClapTrap` base. Destruction is reversed because the derived part depends on the base part existing while it is alive.

### 5. Multiple inheritance
`DiamondTrap` inherits from both `ScavTrap` and `FragTrap`:

```cpp
class DiamondTrap : public ScavTrap, public FragTrap
```

This gives it abilities from both parent classes.

### 6. The diamond problem
Without special handling, `DiamondTrap` could contain **two** separate `ClapTrap` base objects: one through `ScavTrap` and one through `FragTrap`.

To make sure there is only **one** `ClapTrap` instance, `ScavTrap` and `FragTrap` use **virtual inheritance**:

```cpp
class ScavTrap : virtual public ClapTrap
class FragTrap : virtual public ClapTrap
```

Then `DiamondTrap` is responsible for constructing the shared virtual `ClapTrap` base.

### 7. DiamondTrap values
The subject asks DiamondTrap to use:

- Hit points from `FragTrap` = `100`
- Energy points from `ScavTrap` = `50`
- Attack damage from `FragTrap` = `30`
- `attack()` behavior from `ScavTrap`
- Its own name plus a ClapTrap name ending in `_clap_name`

So the DiamondTrap constructor sets the shared `ClapTrap` state accordingly.

### 8. `whoAmI()` and same-named attributes
`DiamondTrap` has its own private `_name`, while the inherited `ClapTrap` also has `_name`.

Inside `whoAmI()` we distinguish them explicitly:

```cpp
_name
ClapTrap::_name
```

### 9. Orthodox Canonical Form
Each class contains:

- Default constructor
- Copy constructor
- Copy assignment operator
- Destructor

This is required by the module rules.

## Makefile rule used in every exercise

Each Makefile has a `HEADERS` variable and the object compilation rule depends on it:

```make
HEADERS = ClapTrap.hpp ...

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@
```

This means if any project header changes, the `.cpp` files are recompiled.

## Include rule used in the source files

The `.cpp` files include their project header only when that header already includes the standard-library dependencies they need.

Example:

```cpp
#include "ClapTrap.hpp"
```

`ClapTrap.hpp` already includes `<iostream>` and `<string>`, so `ClapTrap.cpp` does **not** include them again.

## Exercise progression

- **ex00:** Implement `ClapTrap` with attack, damage, repair, HP, energy, and attack damage.
- **ex01:** Add `ScavTrap`, inheritance, a different attack, and `guardGate()`.
- **ex02:** Add `FragTrap` and `highFivesGuys()`.
- **ex03:** Add `DiamondTrap`, multiple inheritance, virtual inheritance, shared ClapTrap base, and `whoAmI()`.

## Build

Inside any exercise directory:

```bash
make
./claptrap
```

Cleanup:

```bash
make clean
make fclean
make re
```

Simple meaning
“Polymorphic override” means:

“When I hold a parent pointer, I still want the child’s version of the function to run.”

Example:


Without virtual, C++ says:

“You gave me a ClapTrap*, so I call ClapTrap::attack()”
With virtual, C++ says:

“Actually, the object inside is a ScavTrap, so I call ScavTrap::attack()”
That is “polymorphic dispatch”.

“Dispatch” means
It just means:

“Which function gets chosen”

C++ chooses between:

parent function
child function
It can choose:

at compile time
or at runtime


...
## No — constructors are not affected by `virtual`

This is the important point:

- `virtual` does not change constructor behavior
- constructors are always called in the normal order:
  - base constructor first
  - derived constructor second

So:

```cpp
ClapTrap *p = new ScavTrap();
```

This always calls:
- `ScavTrap` constructor
- then `ClapTrap` base constructor is already part of that process

And `virtual` does not change that.

---

## What `virtual` changes is only:
- which function is called when you invoke a method later
- which destructor is called when you `delete` through a base pointer

### Example
```cpp
ClapTrap *p = new ScavTrap();
p->attack("target");   // virtual decides if it calls ScavTrap::attack or ClapTrap::attack
delete p;             // virtual decides if it calls ScavTrap::~ScavTrap or ClapTrap::~ClapTrap
```

### Constructors
Constructors are not chosen by virtual dispatch. They are fixed by the actual type being created.

So:

- `new ScavTrap()` always constructs a `ScavTrap`
- it always runs the `ScavTrap` constructor
- and the base constructor runs as part of that process

### Destructors
Destructors are the ones that can be affected by virtual in the delete case.

So the answer is:

- no, `virtual` does not stop the derived constructor from being called
- it affects method dispatch and deletion through base pointers

That is the key difference.