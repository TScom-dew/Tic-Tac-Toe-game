# Tic-Tac-Toe Game

## Purpose

This Tic-Tac-Toe game is simple from a logical perspective, so the main focus of this project is not only writing good game logic.

The project focuses on:

- Code management and project organization
- Clear separation of responsibilities
- Data flow between different components
- Input error handling and validation
- Applying OOP concepts to real entities
- Understanding how a small application can be structured as a complete project

> **Main idea:** The goal is not only to write good logic, but to understand how a complete application can be structured and how OOP concepts can be applied to real-world entities.

---

## Technical Details

| Technology | Details |
|---|---|
| Language | C++ |
| Build Tool | CMake |
| Application Type | Command-Line Interface (CLI) |
| Project Type | Educational / Learning Project |

---

## Project Structure

```text
Tic-Tac-Toe-game/
├── CMakeLists.txt
├── include/
│   ├── Board.h
│   ├── Player.h
│   └── Game.h
├── src/
│   ├── Board.cpp
│   ├── Player.cpp
│   └── Game.cpp
├── app/
│   └── main.cpp
├── docs/
│   └── document.md
├── .gitignore
├── LICENSE
└── README.md
```

---

## OOP Concepts Applied

The project uses separate classes to represent different responsibilities.

### `Board`

Responsible for:

- Storing the game board
- Displaying the board
- Checking whether a cell is empty
- Placing a player's mark
- Checking rows, columns, and diagonals
- Checking whether the board is full

### `Player`

Responsible for:

- Representing a player
- Storing the player's symbol (`X` or `O`)
- Providing access to the player's symbol

### `Game`

Responsible for:

- Managing the game flow
- Taking player input
- Validating input
- Checking for a winner
- Switching players
- Displaying the final result

This separation makes each class responsible for a specific part of the application instead of putting all logic into one large source file.

---

## Input Error Handling

The project also focuses on handling incorrect user input.

Examples include:

- Non-numeric input
- Row or column values outside the valid range
- Selecting an already occupied cell
- Handling invalid input without breaking the game loop

The program uses C++ input-stream error handling such as:

```cpp
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```

This allows the program to recover from invalid input and continue running.

---

## Why CMake?

CMake is used to manage the build process and compile the project from multiple source files.

Instead of compiling everything as one file, the project separates:

- Header files (`.h`)
- Implementation files (`.cpp`)
- Application entry point (`main.cpp`)

This provides practical experience with a more organized C++ project structure.

---

## Learning Objectives

Through this project, I practiced:

- C++ classes and objects
- Encapsulation
- Separation of interface and implementation
- Header/source file organization
- Pointers and object interaction
- 2D arrays
- Game logic
- Input validation
- Error handling
- CMake-based project organization

---

## Disclaimer

This project is created for **educational and learning purposes**.

The main purpose is to understand C++ OOP concepts and learn how to organize a small application into a structured, maintainable project.

---

## Fun Fact

🎮 **This is my first C++ project where I applied OOP concepts to a complete application.**


