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

    board.changeFieldContent(TicTacToe::Coords({1, 0}), TicTacToe::Circle);
    board.changeFieldContent(TicTacToe::Coords({2, 2}), TicTacToe::Circle);

    testEq(r.render(), std::string("   #   #   \n"
                                   "   # X #   \n"
                                   "   #   #   \n"
                                   "###########\n"
                                   "   #   #   \n"
                                   " O #   #   \n"
                                   "   #   #   \n"
                                   "###########\n"
                                   "   #   #   \n"
                                   "   #   # O \n"
                                   "   #   #   \n"));


    return 0;
}
