#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <regex>

void gameStart(int lives, int wlength, std::string word);

void sConfirm(int lives, std::string word)
{
    std::cout << "Your word is " << word << "!" << std::endl;
    std::cout << "Starting...";
    Sleep(3000);
}

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
