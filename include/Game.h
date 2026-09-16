#pragma once

#include "Board.h"
#include "Player.h"

class Game{
private:
    // using has-a relation
    Board board;

    Player playerX;
    Player playerO;

    Player *currentPlayer;

    char winner;

public:
    Game();

    void run();

private:
    void getPlayerMove();

    bool checkWinner();

    void switchPlayer();

    void displayResult();
};
