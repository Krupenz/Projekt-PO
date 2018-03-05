#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>

#include "../headers/color.h"
#include "../headers/map.h"

using namespace std;

void Map::load(const char* filename)
/* 
    Wczytuje mapę ze znakami i zapisuje ją do wektora. 
    TODO: Zawsze na końcu pliku musi być dodatkowa pusta linia, 
    gdy jej nie ma to while kończy działanie,
    bo napotyka na koniec pliku i nie dodaje się ostatnia linia pliku
*/
{
    char c;
   
    ifstream file;
    file.open(filename);

    if(file.is_open())
    {
        vector<char> row;
        
        while(file.get(c))
        {
            cout << c;
            if(c == '\n')
            {
                map_array.push_back(row);
                row.clear();
            }
            else
            {
                row.push_back(c);
            }
        }
    }
        
    file.close();
}

void Map::show()
/*
    Wyświetla tablicę znaków uwzględniając odpowiednie kolory.
*/
{
    for(int i = 0; i < map_array.size(); i++)
    {
        for(int j = 0; j < map_array[0].size(); j++)
        {
            if((i == player.position.y) && (j == player.position.x))
            {
                Color::color("@", 252);
                continue;
            }
            
            switch(map_array[i][j])
            {
                case 'X':
                    Color::color("X", 255);
                    break;
                    
                case 'P':
                    Color::color("P", 238);
                    break;
                    
                case 'W':
                    Color::color("W", 153);
                    break;
                    
                case 'G':
                    Color::color("G", 170);
                    break;
                    
                case 'D':
                    Color::color("D", 34);
                    break;
                    
                case 'T':
                    Color::color("T", 68);
                    break;
                    
                default:
                    cout << map_array[i][j];
            }
        }
        cout << "\n";
    }
}