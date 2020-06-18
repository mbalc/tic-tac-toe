#include "../src/coords.hpp"
#include "test.hpp"

int main () {
    TicTacToe::Coordinate c(3);
    TicTacToe::test(c == 0);
    TicTacToe::test(c + 7 == 1);
    return 0;
}
