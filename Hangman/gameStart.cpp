#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <regex>

void gameStart(int lives, int wlength, std::string word)
{
    std::string gChar; //Guessed Character
    std::string rgWord; //Removed Guess Word
    int mChar; // Matching Guesses
    int wlengtha; //Word Length after removing the found Chars

    while (lives >= 1 && wlength >= 1)
    {
        {
            std::cout << "Remaining Lives: " << lives << std::endl;
            std::cout << "The word has " << wlength << " letters remaining." << std::endl;
            std::cout << "Guess a Letter: ";
            std::cin >> gChar;

            rgWord = std::regex_replace(word, std::regex(gChar), "");
            mChar = wlength - rgWord.length();
            wlengtha = wlength - mChar;

            if (mChar >= 1)
            {
                wlength = wlengtha;
                word = rgWord;

                std::cout << "You got " << mChar << " character!" << std::endl;
                Sleep(1000);
                system("CLS");
            }
            else
            {
                lives--;
                std::cout << "You Failed";
                Sleep(1000);
                system("CLS");
            }
        }
    }

    if (wlength == 0) //Win check
    {

        std::cout << "Congradulations you WON!\n" << "You had " << lives << " lives remaining" << std::endl;
        system("pause");
    }
    else if (lives == 0) //Lose check
    {

        std::cout << "You lost :( Too bad. \n" << "You had " << wlength << " letters remaining" << std::endl;
        system("pause");
    }

}