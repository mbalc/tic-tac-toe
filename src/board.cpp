#include "board.hpp"
#include <vector>

namespace TicTacToe {

    std::vector<BoardLine> Board::winningPossibilities() {
        std::vector<BoardLine> allLines;
        BoardLine line;
        Coords field;
        for(int i=0; i<BOARD_WIDTH; ++i) {
            for(int j=0; j<BOARD_WIDTH; ++j) {
                  field[0] = i;
                  field[1] = j;
                  line[j] = field;
            }
            allLines.push_back(line);
        }
        return allLines;
    }

    void Board::changeFieldContent(Coords fieldCoords, Symbol symbol) {
        board[fieldCoords[0]][fieldCoords[1]] = symbol;
    }


    std::vector<BoardLine> Board::testTaMetoda() { // TODO: remove
        return winningPossibilities();
    }

    std::optional <Symbol> Board::fieldContent(Coords fieldCords) {
        return board[fieldCords[0]][fieldCords[1]];
    }



    //std::vector<Coords[3]> Board::winningSymbolLines(){
        //
        // for(int i=0; i<BOARD_WIDTH; i++) {
        //     if(board[0][0]==true) {
        //         for(int j=0; j<BOARD_WIDTH-1; j++) {
        //             if(board[i][j]!=board[i][j+1]) break;
        //             if(j==BOARD_WIDTH-2) return ;
        //         }
        //     }
        //
        // }

};