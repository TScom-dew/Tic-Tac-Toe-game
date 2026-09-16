#include "Player.h"

#include "Player.h"

Player::Player(char symbol){
    this->symbol = symbol;
}

char Player::getSymbol() const{
    return symbol;
}
