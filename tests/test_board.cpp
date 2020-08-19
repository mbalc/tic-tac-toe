#include "../src/coords.hpp"
#include "test.hpp"
#include "../src/enums.hpp"
#include <optional>
#include <iostream>
#include "../src/board.hpp"
#include <vector>

using namespace TicTacToe;


int main () {

    std::cout<<"supa";
    Board b;
    Coords cord = {0, 2};
    b.changeFieldContent(cord, Cross);
    if(b.fieldContent(cord)==Cross) std::cout<<"yay";
    std::optional <Symbol> a = (b.fieldContent(cord));
    std::cout<<*(b.fieldContent(cord));
    std::vector<BoardLine> allLines;
    //test(b.testTaMetoda()==allLines);

    //std::cout<<b.value()<<'\n';
    return 0;
}
