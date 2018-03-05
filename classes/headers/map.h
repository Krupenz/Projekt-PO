#ifndef MAP_H
#define MAP_H

#include "../headers/player.h"

struct point {
                int x; 
                int y;
                };

class Map
{
    public:
        void show();
        void load(const char* filename);
        Player player;
    private:
        std::vector< std::vector<char> > map_array;
};

#endif