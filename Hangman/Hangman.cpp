#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <regex>

#include "gameCore.h"

int main()
{
    int lives;
    int wlength;
    int restart = 69;
    std::string word;
    std::cout << "Select number of lives: ";
    std::cin >> lives;

    std::cout << "Select your word: ";
    std::cin >> word;

    wlength = word.length();

    system("CLS");

    sConfirm(lives, word);

    system("CLS");

    gameStart(lives, wlength, word);

    while (restart == 69)
    {
        system("CLS");
        main();
    }
}
