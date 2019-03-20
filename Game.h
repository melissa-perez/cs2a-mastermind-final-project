#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>

class Game
{
   public:
       Game();
       void PrintIntroduction();  
       void ComputerTurn();
       void PlayerTurn();
       std::string GetPlayerWord() const;
       void SetPlayerWord(std::string);
       std::string GetWordChosen() const;
       bool GetCorrectGuess() const;
       bool GetPlayGameAgain() const;
       void CreateResponse();
       static void PrintWordBank();
       void playAgain();

   private:
       int gameTurn;
       bool correctGuess;
       bool playGameAgain;
       std::string wordChosen;
       std::string playerWord;
       std::string computerResponse;
       const static int correctLength;
       const static std::string quitCommand;
       const static std::string helpCommand;
       const static char continueGame;
       const static std::string noMatches;
       const static std::string winString;
       const static std::vector<std::string> wordBank;
       static std::vector<std::string> CreateWordBank();
       void PrintInstructions();
       bool SanitizeInput(std::string&);

};


#endif // GAME_H
