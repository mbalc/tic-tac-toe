#ifndef TIC_TAC_TOE_BOARD_RENDERER_HPP
#define TIC_TAC_TOE_BOARD_RENDERER_HPP

#include "board.hpp"
#include "board_renderer.hpp"
#include "renderer.hpp"
#include "enums.hpp"

#include <array>

// TODO: not tested yet (need board implementation)
namespace TicTacToe {
    class BoardRenderer : public Renderer {
    private:
        Board &board;

        MaybeSymbolRow getBoardRowSymbols(Coordinate rowNumber);

    public:
        BoardRenderer(Board &board);

        std::string render() override;
    };
}

#endif //TIC_TAC_TOE_BOARD_RENDERER_HPP
