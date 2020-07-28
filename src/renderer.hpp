#ifndef TIC_TAC_TOE_RENDERER_HPP
#define TIC_TAC_TOE_RENDERER_HPP

#include <string>

namespace TicTacToe {
    class Renderer {
    public:
        virtual std::string render() = 0;
    };
}

#endif //TIC_TAC_TOE_RENDERER_HPP
