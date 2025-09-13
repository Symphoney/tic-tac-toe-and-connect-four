#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <vector>

enum class Cell { Empty, X, O };
enum class GameResult { InProgress, X_Wins, O_Wins, Draw };

char toChar(Cell c) {
    switch(c) {
        case Cell::Empty: return '.';
        case Cell::X: return 'X';
        case Cell::O: return 'O';
    }
    return '?';
}


class TicTacToe {
public:
    void startGame();
private:
    std::vector<std::vector<Cell>> board;
    Cell currentPlayer;
    void printBoard();
    bool makeMove(int row, int col);
    GameResult checkGameResult();
};

#endif //TIC_TAC_TOE_H
