#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H

#include <vector>
#include <optional>
#include "board.hpp"
#include "coords.hpp"
#include "enums.hpp"

namespace TicTacToe {
    class Game {
    public:
        Symbol currentPlayer();

        const Board getBoard();

        State getState();

        void turn(Coords coords);
    };
}

#endif //TIC_TAC_TOE_GAME_HPP
