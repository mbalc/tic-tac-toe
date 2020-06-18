#include <vector>

namespace TicTacToe {
    const int BOARD_WIDTH = 3;
    enum Symbol {
        Cross, Circle
    };
    enum State {
        CrossTurn, CircleTurn, CrossWon, CircleWon, GameDrawn
    };
    typename Coordinate int;
    typename Coords Coordinate[3];

    class Board {
    public:
        std::optional <Symbol> fieldContent(Coords coords);

        std::vector<Coords[3]> winningSymbolLines();
    }

    class Game {
    public:
        Symbol currentPlayer();

        const Board getBoard();

        State getState();

        void turn(Coords coords);
    }
}
