#ifndef PLAYER_H
#define PLAYER_H

struct pos {
                int x; 
                int y;
                };

class Player
{
    public:
        void setPosition(int x, int y);
        void moveUp();
        void moveDown();
        void moveRight();
        void moveLeft();
    public:
        pos position;
};

#endif