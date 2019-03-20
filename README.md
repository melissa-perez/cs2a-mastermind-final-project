# CS2A_MASTERMIND

<h1 align="center"> Mastermind </h1>

<h2> Introduction </h2>

<p>Mastermind is a two-player game in which a player will choose a 4 letter word and will guide the second player to a correct guess or forces  the player to give up. To help the second player, a code is shown as a sequence of asterisks, hyphens, and spaces.  These correspond to a correct letter and proper position, a correct letter and incorrect position, or a incorrect letter, respectively, of the guess attempt. The position of these symbols don't correspond to the locations exactly in the chosen word.
</p>

<p>In this implementation, Player 1 will be designated as the computer which will select a random word from a list read in from file and the user will be Player 2. These two players alternate their turns until the word is guessed or is not. 
</p>

<h2> Designing </h2>
<p>
  I decided that all the code would be contained in the Game class. The main has the looping mechanisms to continue repeating the game until the player quits or guesses correctly, and if the player would like to play a new game. Apart from that, all input and output is maintained inside the class. Variables that I believed should not be changed were made into static constant variables. This is because I didn't want the constant variables to keep being initialized at each new Game instance being created. The word bank of all the words was created in this manner, as File I/O is a costly expense. All player input is submitted through a check since that would be the main point of errors barring all game logic handling. 
</p>

<h2> Implementation </h2>
<p>
  Most functions are self explanatory. I did want to go over the few I touched in the video since those are the ones driving the game.
 </p>




<h2> Improvements </h2>
<p>
  In regards to main, I will most likely move the CreateResponse function as a private function and only call it from inside the ComputerTurn(). I didn't want to create a continuation style approach and give ComputerTurn too much power, but I feel that is next course of action if I were to hide more details from the client. I would also change the inner loop of checking the input to an empty string with another bool character within the class. 
</p>

<p>
The header will change accordingly and add the necessary new variables and getters to access them in the main. The logic in CreateResponse could also be handled better and may not need an extra copy set of the current guess and the actual word. I don't feel that it is intuitive enough to explain without writing down, and that is not the purpose of having good code. 
</p>

<p>
Aside from changing th current code, a Player class could be added if the game were to include the ability of having two human players. It would require some restructuring of the current code however. The PlayerTurn and ComputerTurn methods would need to be condensed into similar abilities. Or perhaps include function overloading. There are many ways to achieve this to make the game more robust. I would ideally love to include a graphical interface and perhaps have a file output of streaks and guess attempts. 
</p>
