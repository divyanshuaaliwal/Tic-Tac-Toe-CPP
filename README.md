# Tic Tac Toe
It is a classic two-player game where the goal is to be the first player to get three of their marks in a row (either horizontally, vertically, or diagonally). This C++ program allows two players to play the game from the console.

# Features
- Simple text-based user interface.
- Two players can take turns to place their marks.
- Checks for a winner after each move.
- Detects tie games when all spaces are filled without a winner.

# Getting Started
Prerequisites :
- A C++ compiler (GCC, Clang, MSVC, etc.)
- Basic knowledge of compiling and running C++ programs.

# How to Play
- The game starts with an empty 3x3 board.
- Player X goes first, followed by Player O.
- Players are prompted to enter the row and column numbers (1 to 3) where they want to place their mark.
- The game checks for a winner or a tie after each move.
- The game ends when a player gets three marks in a row or all spaces are filled without a winner.

# Code Overview
- The main parts of the program include:

- board: A 3x3 array representing the game board.
- gameBoard(): A function to print the current state of the game board.
- checkWinner(): A function to check if there is a winner.
- takingInputs(): A function to take user input for the row and column.
- updateBoardAndSwapPlayer(): A function to update the board with the player's mark and switch to the other player.
- main(): The main function that runs the game loop.

# Functions
- void gameBoard(): Displays the current game board.
- void checkWinner(char& winner): Checks the board for a winning condition and updates the winner.
- void takingInputs(int& row, int& col): Prompts the user to input a row and column, ensuring valid input.
- void updateBoardAndSwapPlayer(int& row, int& col, char playerX, char playerO, char& currentPlayer): Updates the board and switches the player.
