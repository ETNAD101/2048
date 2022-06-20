#include <iostream>
#include "game.h"

Game::Game() {
    std::cout << "game class made" << std::endl; 
    int i;
    int j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            board[i][j] = 0;
        }
        j = 0;
    }
    i = 0;
}

void Game::setPoint(int value, int x, int y) {
    board[x][y] = value;
}

void Game::display() {
    int x;
    int y;
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 4; y++) {
            std::cout << board[x][y] << " ";
        }
        std::cout << std::endl;
        y = 0;
    }
    x = 0;
}
