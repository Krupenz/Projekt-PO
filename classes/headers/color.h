#ifndef COLOR_H
#define COLOR_H

class Color
/*
    Klasa wyświetlająca tekst według wybranego koloru tekstu oraz jego tła.
    TODO: Zmiana funkcji na modyfikatory strumienia, żeby można było zmieniać kolory mniej więcej tak: cout << red_text << blue_bg << "string";
*/
{
    public:
        static void color(char* text, WORD text_attributes);
        static void color(int text, WORD text_attributes);
};

#endif