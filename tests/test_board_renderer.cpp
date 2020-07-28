#include "../src/board.hpp"
#include "../src/board_renderer.hpp"
#include "../src/coords.hpp"
#include "../src/enums.hpp"
#include "test.hpp"

using TicTacToe::testEq;

int main() {
    TicTacToe::Board board;
    TicTacToe::BoardRenderer r(board);

    testEq(r.render(), std::string("   #   #   \n"
                                   "   #   #   \n"
                                   "   #   #   \n"
                                   "###########\n"
                                   "   #   #   \n"
                                   "   #   #   \n"
                                   "   #   #   \n"
                                   "###########\n"
                                   "   #   #   \n"
                                   "   #   #   \n"
                                   "   #   #   \n"));


    board.changeFieldContent(TicTacToe::Coords({0, 1}), TicTacToe::Cross);

    testEq(r.render(), std::string("   #   #   \n"
                                   "   # X #   \n"
                                   "   #   #   \n"
                                   "###########\n"
                                   "   #   #   \n"
                                   "   #   #   \n"
                                   "   #   #   \n"
                                   "###########\n"
                                   "   #   #   \n"
                                   "   #   #   \n"
                                   "   #   #   \n"));


    return 0;
}
