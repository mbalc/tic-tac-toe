#ifndef TIC_TAC_TOE_COORDS_HPP
#define TIC_TAC_TOE_COORDS_HPP

#include "consts.hpp"

namespace TicTacToe {
    class Coordinate {
        int value;

    public:
        Coordinate(int initValue = 0) : value(initValue) {}

        Coordinate *operator=(int c) {
            value = c;
            return this;
        }

        Coordinate operator+(int c) const { return Coordinate(value + c); }

        Coordinate *operator+=(int c) { return this->operator=(value + c); }

        Coordinate *operator-=(int c) { return *this += (-c); }

        operator int() {
            value %= BOARD_WIDTH;
            return value;
        }
    };

    using Coords = Coordinate[2];
}

#endif //TIC_TAC_TOE_COORDS_HPP
