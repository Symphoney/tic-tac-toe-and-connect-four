#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include "game.h"

class TicTacToe : public Game {
public:
    TicTacToe();
    void startGame() override;
    void printBoard() const override;
    bool makeMove(int col) override; // col is ignored for TicTacToe
    GameResult checkResult() override;

private:
    std::vector<std::vector<Cell>> board;
    Cell currentPlayer;
    GameResult res;
    bool isFull() const;
    void switchPlayer();
};

#endif //TIC_TAC_TOE_H

/*
 * std::vector<std::vector<Cell>> board; -- is a dynamic 2D array
 * I understood that doing just one vector would give us just
 * a dynamic 1D array. You can see it as rows of cells.
 *
 * Also much easier memory management to use vectors instead of arrays
 * as that would require the manual new/delete
 */