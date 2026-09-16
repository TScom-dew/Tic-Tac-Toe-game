# Tic-Tac-Toe 🎮

A simple **C++ command-line Tic-Tac-Toe game** built as a learning project to practice **OOP, modular project structure, input validation, and CMake**.

## Features

- 🎮 Two-player gameplay (`X` and `O`)
- 🧩 3×3 game board
- 🏆 Winner detection
- 🤝 Draw detection
- ⌨️ Input validation
- 🔄 Turn switching
- 📦 Modular C++ project structure
- ⚙️ CMake-based build system

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

## Technologies

- **Language:** C++
- **Build Tool:** CMake

## Build & Run

### 1. Configure the project

From the project root directory:

```bash
cmake -S . -B build
```

### 2. Build the project

```bash
cmake --build build
```

### 3. Enter the build directory

```bash
cd build
```

### 4. Run the game

On Windows:

```bash
./tic-tac-toe.exe
```

## Learning Purpose

This project was created to understand how a small C++ application can be organized using:

- Classes and objects
- Encapsulation
- Header/source separation
- Pointers and object interaction
- 2D arrays
- Input error handling
- CMake
- Separation of responsibilities

> **The goal is not only to write good logic, but also to understand how code can be structured into a maintainable project.**


## Future Improvements

Possible improvements for future versions:

- Add a single-player mode with computer/AI opponent
- Add difficulty levels
- Add score tracking
- Add replay/rematch functionality
- Improve the CLI user interface
- Add automated tests for game logic


## Disclaimer

This project is created for **educational and learning purposes**.

## Fun Fact

🎯 This is my **first C++ project where I applied OOP concepts to a complete application.**
