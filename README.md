# Mastermind Game

- Mastermind is a board game that features 8 different pieces of colors. We will be replacing colors for digits and playing on the command line! 
- A secret code is then composed of 4 distinct pieces. The player has 10 attempts by default to find the secret code.
- The pieces will be 0-7, any non valid input will end the game. 
- After every successive input the game will relay to the player the number of "Well placed" and "Misplaced" pieces.
- If you find the secret code, you win and the game stops. 



##  Installation 

- You can download the project folder and files manually to your computer or fork the Github repo at:
https://github.com/ahmadiavin/Mastermind/
- Or through your terminal, clone this repository: `git clone https://github.com/ahmadiavin/Mastermind`
- Go to the directory containing this project: `cd my_mastermind`
- Check to see you have a GCC compiler installed: `gcc --version`
- Compile automatically using the makefile using `make` or manually `gcc -Wall -Wextra -Werror *.c -o play_mastermind`

## Usage and custom input
- In the terminal, type "./my_mastermind" 
- By default you are given 10 attempts and a random secret code
- If you wish to specify your own code and attempts then:
- Example to create your own secret code  "./my_mastermind -c 1234"
- Example to specify attempts  "./my_mastermind -t 15"
- Combine both - "./my_mastermind -c 1234 -t 15"
