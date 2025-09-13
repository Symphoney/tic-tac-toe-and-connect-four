#include <iostream>
#include "connect-four.h"
#include "tic-tac-toe.h"

// Interface, inheritance + virtual functions + base class pointers

int main() {

    std::cout << "Select game:\n1. Tic-Tac-Toe\n2. Connect Four\n";
    int choice;
    std::cin >> choice;

    Game* game = nullptr;
    if (choice == 1)
        game = new TicTacToe();
    else
        game = new ConnectFour();

    game->startGame();
    delete game;


    return 0;
}

/*
 * Why Game* game = nullptr;? -> Polymorphism
 *
 * The pointer lets you say "I don't care what exact type this is,
 * as long as it's some kind of Game"
 *
 * *
 * You don't know ahead of time whether the user chose TicTacToe or ConnectFour.
 * If it was set as:
 * TicTacToe game; -- then you're locked into TicTacToe only
 *
 * a pointer to the base class, however, you can pick at runtime
 * So this is like TicTacToe* game = new TicTacToe(); or
 * ConnectFour* game = new ConnectFour();
 * depending on what the user chose.
 *
 *
 * game->startGame();
 * When you think of interfaces/contracts, you think of using ->
 * The base class Game promises "Any game will have a startGame() function"
 * So from main.cpp's perspective, it doesn't matter if it's TicTacToe or
 * ConnectFour.
 *
 * The -> operator means "Call a function on the object the pointer points to."
 */
