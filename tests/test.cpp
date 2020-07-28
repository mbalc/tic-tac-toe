#include <cassert>
#include <cstdlib>
#include <iostream>
#include "test.hpp"

namespace TicTacToe {
    int counter = 1;
    void test (bool expression) {
        if (!expression) {
            printf("FAIL: Assert %d failed\n", counter++);
        }
        else {
            printf("Assert %d passed successfully\n", counter++);
        }
    }

    void testEq (const std::string &a, const std::string &b) {
        bool expr = a.compare(b) == 0;
        if (!expr) {
            std::cout << "Expected '" << a << "', but got '" << b << "'\n";
        }
        return test(expr);
    }
}
