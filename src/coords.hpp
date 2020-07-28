#ifndef TIC_TAC_TOE_COORDS_HPP
#define TIC_TAC_TOE_COORDS_HPP

#include "consts.hpp"
#include <array>

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

        bool operator==(int c) const { return value==c; }
        bool operator==(Coordinate c) const { return value==c.value; }

        operator int() {
            value %= BOARD_WIDTH;
            return value;
        }
    };

    using Coords = std::array<Coordinate, DIMENSION_COUNT>;
}

#endif //TIC_TAC_TOE_COORDS_HPP
