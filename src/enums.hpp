#ifndef TIC_TAC_TOE_ENUMS_HPP
#define TIC_TAC_TOE_ENUMS_HPP

#include <optional>

namespace TicTacToe {
    enum Symbol {
        Cross, Circle
    };
    enum State {
        CrossTurn, CircleTurn, CrossWon, CircleWon, GameDrawn
    };

    using MaybeSymbol = std::optional<Symbol>;
    using MaybeSymbolRow = std::array<MaybeSymbol, BOARD_WIDTH>;
}

#endif //TIC_TAC_TOE_ENUMS_HPP
