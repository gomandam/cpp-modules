# Copilot instructions — 42 C++ Modules (Piscine / CPP00–CPP09)

These instructions define **project-wide rules** for the 42 Network C++ modules.

## Goal
- Produce **C++98-compatible** solutions that match 42 subjects exactly.
- Keep code **clean, readable, and evaluator-friendly**.

## Compiling
- Compile with:
  - `c++ -Wall -Wextra -Werror`
- Code must still compile if the evaluator adds:
  - `-std=c++98`

## Formatting & naming conventions
- Exercise directories: `ex00`, `ex01`, ... `exN`.
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
- You may use most of the **C++ standard library** (prefer C++-style facilities over C ones).
- **No external libraries**:
  - **Boost is forbidden**.
  - **C++11 or later features are forbidden** (stick to C++98).
- The following are **forbidden** (grade = 0):
  - `printf()`
  - `alloc()`
  - `free()`
- Unless explicitly allowed by the subject:
  - `using namespace <ns>` is **forbidden** (penalty: -42)
  - `friend` is **forbidden** (penalty: -42)

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
- Do **not** put non-template function implementations in headers (risk: grade = 0).
- Headers must be **self-contained**:
  - include the dependencies they need
  - use **include guards** to avoid double inclusion (otherwise grade = 0)

## Readme / workflow reminders
- You may add extra `.cpp/.hpp` files to split code if needed, as long as mandatory files are present.
- Examples in the subject may contain requirements not stated in short bullet lists.
- Read the full module before starting.
- Think carefully; don’t cargo-cult patterns.

