#ifndef TIC_TAC_TOE_ENUMS_HPP
#define TIC_TAC_TOE_ENUMS_HPP

namespace TicTacToe {
    enum Symbol {
        Cross, Circle
    };
    enum State {
        CrossTurn, CircleTurn, CrossWon, CircleWon, GameDrawn
    };
}

#endif //TIC_TAC_TOE_ENUMS_HPP
