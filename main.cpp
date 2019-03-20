/**
    CS-2A Extra Credit - Mastermind
    Purpose: Two-player game where Player 2 tries
    to guess Player 1's 4-letter word.
    URL to video:

    @author Melissa Perez
    @version 1.0 3/18/19
*/

#include <ctime>
#include <Game.h>

using namespace std;


int main(int argc, char *argv[])
{
    srand(time(NULL));

    Game beta;

    while(beta.GetPlayGameAgain())
    {
        beta = Game();
        beta.PrintIntroduction();

        while(!beta.GetCorrectGuess())
        {
            beta.ComputerTurn();

            if(beta.GetCorrectGuess())
            {
                break;
            }

            while(beta.GetPlayerWord() == "")
            {
                beta.PlayerTurn();
            }

            beta.CreateResponse();
        }
         beta.playAgain();
    }

    return 0;
}

