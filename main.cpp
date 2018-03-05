#include <iostream>
#include <string>
#include <windows.h>
#include <string>
#include <fstream>
#include <vector>


#include "classes/headers/map.h"

using namespace std;

int main()
{
    /* 
        Użycie konsolowej komendy cls zajmuje windowsowej konsoli mnóstwo czasu,
        w tym fragmencie ustawiany jest uchwyt konsoli i punkt od którego po wpisaniu komendy 
        znaki są nadpisywane, a nie czyszczone i znów wypisywane.
      */
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD curDefaultPos;
    curDefaultPos.X = 0;
    curDefaultPos.Y = 0;
    
    // Tworzenie instancji mapy
    Map map;
    map.load("map.txt");
    
    map.player.setPosition(54, 14);
    
    char cmd;
    
    system("MODE CON: COLS=150 LINES=30"); // Ustalenie wielkości okienka konsolowego. Pewnie jest na to jakaś funkcja na to
    
    bool run = true;
    while(run)
    {
        map.show();
        
        cin >> cmd;
        
        switch(cmd)
        {
            case 'q':
                run = false;
                break;
                
            case 'w':
                map.player.moveUp();
                break;
                
            case 's':
                map.player.moveDown();
                break;   
                
            case 'a':
                map.player.moveLeft();
                break;    
                
            case 'd':
                map.player.moveRight();
                break;
        }
        
        SetConsoleCursorPosition(hConsole, curDefaultPos);
    }
       
    return 0;
}