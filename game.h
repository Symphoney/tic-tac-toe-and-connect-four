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
