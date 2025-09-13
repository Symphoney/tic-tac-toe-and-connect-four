//
// Created by Micah on 9/12/2025.
//

#ifndef CONNECT_FOUR_H
#define CONNECT_FOUR_H

#include "game.h"

class ConnectFour : public Game {
public:
    ConnectFour(int rows = 6, int cols = 7);
    void startGame() override;
    void printBoard() const override;
    bool makeMove(int col) override;
    GameResult checkResult() override;
private:
    std::vector<std::vector<Cell>> board;
    Cell currentPlayer;
    GameResult res;
    int rows, cols;

    bool isColumnFull(int col) const;
    bool switchPlayer();
    bool checkWin(int r, int c) const;
};

#endif //CONNECT_FOUR_H
