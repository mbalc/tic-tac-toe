#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include "coords.hpp"
#include "enums.hpp"
#include <vector>
#include <optional>
#include <array>


namespace TicTacToe {
    using BoardLine = std::array<Coords, BOARD_WIDTH>;
    class Board {
    private:
        std::optional <Symbol> board [BOARD_WIDTH][BOARD_WIDTH];
        ;
    public:
        std::vector<BoardLine> testTaMetoda() { // TODO: remove
            return winningPossibilities();
        }
        std::optional <Symbol> fieldContent(Coords coords);

        std::vector<Coords[3]> winningSymbolLines();

        std::vector<BoardLine> winningPossibilities();
    };
}

#endif //TIC_TAC_TOE_BOARD_H
