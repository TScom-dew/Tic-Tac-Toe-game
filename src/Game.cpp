#include <iostream>
#include <limits>

#include "Game.h"

Game::Game()
    : playerX('X'),
      playerO('O'),
      currentPlayer(&playerX),
      winner(' '){}

void Game::run(){
    for (int turn = 0; turn < 9; turn++){
        board.display();

        std::cout << "\nCurrent player is "
                  << currentPlayer->getSymbol()
                  << "\n";

        getPlayerMove();

        if (checkWinner())
        {
            break;
        }

        if (board.isFull())
        {
            break;
        }

        switchPlayer();
    }

    displayResult();
}

void Game::getPlayerMove(){
    int row;
    int column;

    while (true){
        // taking row input
        std::cout << "Enter row from 0-2 : ";
        std::cin >> row;
        // Input type error
        if (std::cin.fail()){
            std::cout << "Invalid input. Please enter numbers.\n";

            std::cin.clear();

            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n');

            continue;
        }
        // taking column input
        std::cout << "Enter column from 0-2 : ";
        std::cin >> column;
        // Input type error
        if (std::cin.fail()){
            std::cout << "Invalid input. Please enter numbers.\n";

            std::cin.clear();

            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n');
            continue;
        }

        // Range validation
        if (row < 0 || row > 2 ||
            column < 0 || column > 2){
            std::cout << "Invalid position. "
                      << "Row and column must be 0-2.\n";

            continue;
        }

        // Cell validation
        if (!board.isCellEmpty(row, column)){
            std::cout << "Tile is full. Please try again.\n";

            continue;
        }

        board.placeMark(
            row,
            column,
            currentPlayer->getSymbol()
        );

        break;
    }
}

bool Game::checkWinner()
{
    if (board.checkRows(winner)){
        return true;
    }

    if (board.checkColumns(winner)){
        return true;
    }

    if (board.checkDiagonals(winner)) {
        return true;
    }

    return false;
}

void Game::switchPlayer(){
    if (currentPlayer == &playerX){
        currentPlayer = &playerO;
    }else{
        currentPlayer = &playerX;
    }
}

void Game::displayResult(){
    std::cout << "\n";

    if (winner != ' '){
        std::cout << "Player "
                  << winner
                  << " is the winner!\n";
    }else{
        std::cout << "Tie!\n";
    }

    std::cout << "\nFinal Board:\n\n";

    board.display();
}