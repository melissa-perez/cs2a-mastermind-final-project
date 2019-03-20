# CS2A_MASTERMIND

<h1 align="center"> Mastermind </h1>

<h2> Introduction </h2>

<p>Mastermind is a two-player game in which a player will choose a 4 letter word and will guide the second player to a correct guess or forces  the player to give up. To help the second player, a code is shown as a sequence of asterisks, hyphens, and spaces.  These correspond to a correct letter and proper position, a correct letter and incorrect position, or a incorrect letter, respectively, of the guess attempt. The position of these symbols don't correspond to the locations exactly in the chosen word.
</p>

<p>In this implementation, Player 1 will be designated as the computer which will select a random word from a list read in from file and the user will be Player 2. These two players alternate their turns until the word is guessed or is not. 
</p>

<h2> Designing </h2>
<p>
  I decided that all the code would be contained in the Game class. The main has the looping mechanisms to continue repeating the game until the player quits or guesses correctly, and if the player would like to play a new game. Apart from that, all input and output is maintained inside the class. 
</p>




<h2> Improvements </h2>
<p>
  In regards to main, I will most likely move the CreateResponse function as a private function and only call it from inside the ComputerTurn(). I didn't want to create a continuation style approach, giving ComputerTurn too much power, but I don't believe an important function should be called in the main. I would also change the inner loop of checking the input to an empty string with another bool character within the class. 
</p>

<p>
The header will change accordingly and add the necessary new variables and getters to access them in the main.
</p>

<p>
Another Player class could be added if the game were to include the ability of having two human players. It would require some restructuring of the current code however. The PlayerTurn and ComputerTurn methods would need to be condensed into similar abilities. Or perhaps include function overloading. There are many ways to achieve this to make the game more robust. I would ideally love to include a graphical interface and perhaps have a file output of streaks and guess attempts.
</p>
