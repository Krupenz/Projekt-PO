#include <iostream>
#include <string>
#include <windows.h>

#include "../headers/color.h"

using namespace std;

void Color::color(char* text, WORD text_attributes)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, text_attributes);
    cout << text;
    SetConsoleTextAttribute(hConsole, 7);
}

void Color::color(int text, WORD text_attributes)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, text_attributes);
    cout << text;
    SetConsoleTextAttribute(hConsole, 7);
}