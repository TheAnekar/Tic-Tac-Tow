
# Tic Tac Toe (C++ Modular Project)

A simple, modular console-based Tic Tac Toe game written in C++.  
This project demonstrates clean code organization using separate header and source files for each functional component.

## Features

- Two-player Tic Tac Toe in the terminal
- Modular code structure (board, win checker, player moves, main)
- Input validation for moves

## File Structure

```
.
├── board.h
├── board.cpp
├── winchecker.h
├── winchecker.cpp
├── playermover.h
├── playermover.cpp
└── main.cpp
```

## How to Build

1. **Clone or download this repository.**
2. **Open a terminal in the project directory.**
3. **Compile all `.cpp` files together:**

   ```
   g++ main.cpp board.cpp winchecker.cpp playermover.cpp -o tictactoe
   ```

4. **Run the game:**

   ```
   ./tictactoe
   ```

## How to Play

- The game is played on a 3x3 grid.
- Players take turns entering their move as two numbers (row and column), both from 1 to 3.
  - Example: `1 1` for the top-left cell, `3 3` for the bottom-right.
- The game announces the winner or a draw at the end.

## Customization & Extensions

- Add a replay/reset option
- Track scores over multiple rounds
- Improve input validation
- Implement a computer (AI) opponent
- Port to a GUI using Qt or GTK

## License

This project is open source and free to use for learning and personal projects.

---

*Happy coding!*
```
