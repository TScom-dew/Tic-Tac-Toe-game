#include <iostream>
#include "Board.h"

Board::Board(){
    for (int row = 0; row < 3; row++){
        for (int column = 0; column < 3; column++) {
            board[row][column] = ' ';
        }
    }
}

void Board::display() const{
    for (int row = 0; row < 3; row++){

        std::cout << " " << board[row][0] << " | "
                  << board[row][1] << " | "
                  << board[row][2] << " | " << "\n";

        if(row<2){
            std::cout << "---+---+----\n";
        }
    }
}

bool Board::isCellEmpty(int row, int column) const{
    return board[row][column] == ' ';
}

void Board::placeMark(int row, int column, char mark){
    board[row][column] = mark;
}

bool Board::checkRows(char &winner) const{
    for (int row = 0; row < 3; row++){
        if (board[row][0] != ' ' &&
            board[row][0] == board[row][1] &&
            board[row][1] == board[row][2]){
            winner = board[row][0];
            return true;
        }
    }

    return false;
}

bool Board::checkColumns(char &winner) const{
    for (int column = 0; column < 3; column++){
        if (board[0][column] != ' ' &&
            board[0][column] == board[1][column] &&
            board[1][column] == board[2][column]){
            winner = board[0][column];
            return true;
        }
    }

    return false;
}

bool Board::checkDiagonals(char &winner) const{
    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2]){
        winner = board[0][0];
        return true;
    }

    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0]){
        winner = board[0][2];
        return true;
    }

    return false;
}

bool Board::isFull() const{
    for (int row = 0; row < 3; row++){
        for (int column = 0; column < 3; column++){
            if (board[row][column] == ' '){
                return false;
            }
        }
    }

    return true;
}