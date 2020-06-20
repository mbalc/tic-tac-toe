#include "../src/coords.hpp"
#include "test.hpp"
#include "../src/enums.hpp"
#include <optional>
#include <iostream>
#include "../src/board.cpp"
#include <vector>

using namespace TicTacToe;


int main () {

    std::cout<<"supa";
    Board b;
    std::vector<BoardLine> allLines;
    test(b.testTaMetoda()==allLines);

    std::cout<<b.value()<<'\n';
    return 0;
}
