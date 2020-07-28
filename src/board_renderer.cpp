#include "renderer.hpp"
#include "consts.hpp"
#include "board.hpp"
#include "board_renderer.hpp"
#include "enums.hpp"

#include <vector>
#include <array>
#include <numeric>

namespace TicTacToe {
    const int FIELD_MARGIN = 1;
    const int GRID_WIDTH = 1;
    const int SYMBOL_WIDTH = 1; // values other than 1 not supported
    const int FIELD_WIDTH = FIELD_MARGIN + SYMBOL_WIDTH + FIELD_MARGIN;
    const int ROW_WIDTH = (FIELD_WIDTH * BOARD_WIDTH) + (GRID_WIDTH * (BOARD_WIDTH - 1));

    MaybeSymbolRow BoardRenderer::getBoardRowSymbols(Coordinate rowNumber) {
        MaybeSymbolRow output;
        for (auto i = 0; i < BOARD_WIDTH; ++i) {
            Coords fieldCoords = {rowNumber, i};
            output[i] = board.fieldContent(fieldCoords);
        }

        return output;
    }

    std::string repeatStringWithDelimiter(int repetitionCount, std::string repeatableString, char delimiter) {
        std::vector <std::string> repetitions(repetitionCount, repeatableString);

        return std::accumulate(repetitions.begin(), repetitions.end(), std::string(),
                               [&delimiter](std::string ss, std::string s) {
                                   return ss.empty() ? s : ss + delimiter + s;
                               });
    }

    char renderSymbol(Symbol s) {
        switch (s) {
            case Cross:
                return 'X';
            case Circle:
                return 'O';
            default:
                throw "Symbol not supported";
        }
    }

    char renderMarginChar() {
        return ' ';
    }

    char renderMaybeSymbol(MaybeSymbol maybeSymbol) {
        if (maybeSymbol) return renderSymbol(maybeSymbol.value());
        else return renderMarginChar();
    }

    std::string renderMargin() {
        return std::string(FIELD_MARGIN, renderMarginChar());
    }

    char renderGrid() {
        return '#';
    }

    std::string renderFieldMargin() {
        return std::string(FIELD_WIDTH, renderMarginChar());
    }

    std::string renderFieldSymbol(std::optional <Symbol> maybeSymbol) {
        return renderMargin() + renderMaybeSymbol(maybeSymbol) + renderMargin();
    }

    /* row types */

    std::string renderMarginRow() {
        return repeatStringWithDelimiter(BOARD_WIDTH, renderFieldMargin(), renderGrid());
    }

    std::string renderGridRow() {
        return std::string(ROW_WIDTH, renderGrid());
    }

    std::string renderFieldSymbolRow(MaybeSymbolRow maybeSymbolRow) {
        std::string output = "";
        for (auto i = 0; i < BOARD_WIDTH; ++i) {
            if (i > 0) output += renderGrid();
            output += renderFieldSymbol(maybeSymbolRow[i]);
        }
        return output;
    }

    std::string renderMarginRowGroup() {
        return repeatStringWithDelimiter(FIELD_WIDTH, renderMarginRow(), '\n');
    }

    std::string renderGridRowGroup() {
        return repeatStringWithDelimiter(GRID_WIDTH, renderGridRow(), '\n');
    }

    std::string renderFieldSymbolRowGroup(MaybeSymbolRow maybeSymbolRow) {
        return renderFieldSymbolRow(maybeSymbolRow); // TODO: add support for symbols of width > 1
    }

    BoardRenderer::BoardRenderer(Board &board) : board(board) {}

    std::string BoardRenderer::render() {
        std::string output = "";
        for (auto row = 0; row < BOARD_WIDTH; ++row) {
            if (row > 0) output += renderGridRowGroup() + '\n';
            output += renderMarginRowGroup() + '\n';
            output += renderFieldSymbolRowGroup(getBoardRowSymbols(row)) + '\n';
            output += renderMarginRowGroup() + '\n';
        }
        return output;
    }

    // BoardRenderer::~Renderer() { };
}
