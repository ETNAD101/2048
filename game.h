#ifndef GAMECLASS_H
#define GAMECLASS_H

class Game
{
    private:
        long board[4][4];
    public:
       Game();
       void display();
       void setPoint(int value, int x, int y);
};

#endif // GAMECLASS_H