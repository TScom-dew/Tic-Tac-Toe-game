#pragma once 

#include<iostream>

class Board{

  public:
      // this is for initialising
      Board();
      //for displaying board
      void display() const;

      bool isCellEmpty(int row, int column) const;

      void placeMark(int row, int column, char mark);

      bool checkRows(char &winner) const;
      bool checkColumns(char &winner) const;
      bool checkDiagonals(char &winner) const;

      bool isFull() const;

  private:
      char board[3][3];
};