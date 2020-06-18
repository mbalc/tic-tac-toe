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

    class Game {
    public:
        Symbol currentPlayer();

        const Board getBoard();

        State getState();

        void turn(Coords coords);
    }
}
