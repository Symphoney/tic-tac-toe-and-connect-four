#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>


enum class Cell { Empty, X, O };
enum class GameResult { InProgress, X_Wins, O_Wins, Draw };

class Game {
public:
    virtual ~Game() = default;
    virtual void startGame() = 0;
    virtual void printBoard() const = 0;
    virtual bool makeMove(int col) = 0;
    virtual GameResult checkResult() = 0;
};

#endif //GAME_H


/*
 * Because I don't know the exact behavior of the game classes,
 * we use virtual.
 * virtual means "If someone calls this function on a pointer/reference
 * to the Game, run the derived class's override instead."
 *
 * If virtual was not there, C++ would call the base class version, if it exists,
 * even when the object is actually TicTacToe -- static dispatch
 *
 * virtual gives us dynamic dispatch -> correct function is chosen at runtime
 * depending on the actual object type.
 */
