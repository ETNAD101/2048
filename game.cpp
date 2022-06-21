#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

Game::Game() {
    std::srand((unsigned) std::time(0));
    int i;
    int j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            board[i][j] = 0;
        }
        j = 0;
    }
    i = 0;
    std::cout << "Game Ready" << std::endl; 
}

int Game::setPoint(int value, int pos) {
    int x = 0;
    int y = 0;
    
    if(pos <= 16 && pos > 0) {
        for(int i = 0; i < pos - 1; i++) {
            x++;
            if(x == 4) {
                x = 0;
                y++;
            }
        }
    }else{
        std::cout << "Error" << std::endl;
        return 1;
    }
    
    if(board[x][y] != 0) {
        return 1;
    }else{
        board[x][y] = value;
        return 0;
    }

    
}

void Game::place() {
    int num;
    int setNum = (std::rand() % 10) + 1;
    int setPos = (std::rand() % 17);

    if(setNum == 10) {
        num = 4;
    }else{
        num = 2;
    }

    while(Game::setPoint(num, setPos) == 1) {}
}

void Game::shift(char direction) {
    int currentX, currentY, nextX, nextY;
    for (currentX = 0; currentX < 3; currentX ++) {

    }
}

void Game::display() {
    int x;
    int y;
    for (y = 0; y < 4; y++) {
        for (x = 0; x < 4; x++) {
            std::cout << board[x][y] << " ";
        }
        std::cout << std::endl;
        x = 0;
    }
    y = 0;

    std::cout << "---------" << std::endl;
}
