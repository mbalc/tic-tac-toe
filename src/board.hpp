#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include "coords.hpp"
#include "enums.hpp"

namespace TicTacToe {
    class Board {
    public:
        std::optional <Symbol> fieldContent(Coords coords);

        std::vector<Coords[3]> winningSymbolLines();
    };
}

#endif //TIC_TAC_TOE_BOARD_H
