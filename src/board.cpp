#include "board.hpp"

namespace TicTacToe {
    class Board {
    private:
        std::optional <Symbol> board [BOARD_WIDTH][BOARD_WIDTH];


    public:
        std::optional <Symbol> fieldContent(Coords coords) {

            return board[coords[0]][coords[1]];
        }

        std::vector<Coords[3]> winningSymbolLines();
    };
}
