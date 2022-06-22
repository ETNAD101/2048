#ifndef GAMECLASS_H
#define GAMECLASS_H

class Game
{
    private:
        long board[4][4];
    public:
       Game();
       void display();
       void place();
       void clear();
       void compress(char direction);
       int setPoint(int value, int pos);
};

#endif // GAMECLASS_H