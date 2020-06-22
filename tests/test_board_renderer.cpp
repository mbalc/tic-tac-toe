#include "../src/board.hpp"
#include "../src/board_renderer.hpp"
#include "../src/coords.hpp"
#include "test.hpp"

int main() {
    TicTacToe::Board board;
    TicTacToe::BoardRenderer r(board);

    TicTacToe::test(r.render()
                    == "   #   #   "
                       "   #   #   "
                       "   #   #   "
                       "###########"
                       "   #   #   "
                       "   #   #   "
                       "   #   #   "
                       "###########"
                       "   #   #   "
                       "   #   #   "
                       "   #   #   ");

    // TODO: add more tests after the Board setter method is implemented

    return 0;
}
