#include <cassert>
#include <cstdlib>
#include <iostream>
#include "test.hpp"

namespace TicTacToe {
    int counter = 1;
    void test (bool expression) {
        assert(expression);
        printf("Assert %d passed successfully\n", counter++);
    }
}
