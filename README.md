# CPP-modules
Learning the fundamentals and Modules for C++
  
## Modules

**Module 00**: Basics of C++ syntax and the concept of classes, and helped move beyond a C-style approach to string manipulation.\
**Module 01**: Memory allocation, references, pointers to members.\
**Module 02**: Learn ad-hoc polymorphism, operator overloading, and implement the orthodox canonical form (default constructor, copy constructor, copy assignment operator, destructor).\
**Module 03**: Dive into inheritance, base and derived classes, protected class members.\
**Module 04**: Polymorphism, abstract classes, and interfaces to build extendible class hierarchies.\
**Module 05**: Explore exception handling with try/catch blocks, throw expressions, and defining custom exception types depending on the needs.\
**Module 06**: Examine the various C++ casts (static cast, dynamic cast, reinterpret cast, const cast) and their appropriate usecases.\
**Module 07**: Learning about templates in C++, including function templates, class templates, and template specialization.\
**Module 08**: Starting this module, we were allowed to use STL. So I was able to get familiarized with containers, iterators, and algorithms.\
**Module 09**: Full-blown use of STL containers, iterators, and algorithms to implement tasks like complex string parsing and data sorting.

## Goal
- **C++98-compatible** compilation standards.
- Keep code **clean, readable, and evaluator-friendly**.
- Compile with: ** `c++ -Wall -Wextra -Werror -std=c++98` **

## Formatting & naming conventions
- Exercise directories: `ex00`, `ex01`, ...
- Name files/classes/functions/members exactly as the subject requires.
- Class names: **UpperCamelCase**.
- Files containing a class must be named after the class:
  - `ClassName.hpp` (or `.h` if subject says so)
  - `ClassName.cpp`
  - `ClassName.tpp` (if templates)
  - Example: class `BrickWall` -> `BrickWall.hpp`.
- Unless the subject states otherwise, **every output line ends with `\n`** and goes to **stdout**.
- No enforced “Norminette” style here, but write **readable, consistent** C++.

## Allowed / Forbidden
- You are coding in **C++**, not C.
- You may use most of the **C++ standard library**
- **No external libraries**:
  - **Boost is forbidden**.
  - **C++11 or later features are forbidden** (stick to C++98).
- The following are **forbidden**:
  - `printf()`
  - `alloc()`
  - `free()`
- Unless explicitly allowed by the subject:
  - `using namespace <ns>` is **forbidden**
  - `friend` is **forbidden**

### STL restriction
- STL is allowed **only in Modules 08 and 09**.
- Before that (CPP00–CPP07), do **not** use:
  - STL containers (`std::vector`, `std::list`, `std::map`, ...)
  - `<algorithm>` / STL algorithms

## Design requirements
- Prevent **memory leaks** (if you `new`, you must `delete` appropriately; follow RAII where possible in C++98).
- From Module 02 to Module 09: use **Orthodox Canonical Form** (unless subject says otherwise):
  - default constructor
  - copy constructor
  - copy assignment operator
  - destructor
- Do **not** put non-template function implementations in headers.
- Headers must be **self-contained**:
  - include the dependencies they need
  - use **include guards** to avoid double inclusion
 
