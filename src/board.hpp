#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include "coords.hpp"
#include "enums.hpp"
#include <array>
#include <vector>

namespace TicTacToe {
    class Board {
    public:
        std::optional <Symbol> fieldContent(Coords coords);

        std::vector<std::array<Coords, BOARD_WIDTH>> winningSymbolLines();
    };
}

#endif //TIC_TAC_TOE_BOARD_H
