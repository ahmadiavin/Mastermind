# Welcome to My Mastermind

## Task
Create a program that will be an implementation of the famous board game "Mastermind".

## Description
Mastermind is a board game that features 8 different pieces of colors. We will be replacing colors for digits. A secret code is then composed of 4 distinct pieces.
<br>
The player has 10 attempts by default to find the secret code.
<br> 
The pieces will be 0-7, any non valid input will end the game. 
<br>
After every successive input the game will relay to the player the number of "Well placed" and "Misplaced" pieces.
<br>
If you find the secret code, you win and the game stops. 

## Installation and Usage
In the terminal, type "make" to compile the program.
<br>
To play type "./my_mastermind" 
<br>
By default you are given 10 attempts and a random secret code.
<br>
If you wish to specify your own code and attempts then:
<br>
Example to create your own secret code  "./my_mastermind -c 1234"
<br>
Example to specify attempts  "./my_mastermind -t 15"
<br>
Combine both - "./my_mastermind -c 1234 -t 15"


### The Core Team
Ali Ahmadiavin

<span><i>Made at <a href='https://qwasar.io'>Qwasar Silicon Valley</a></i></span>
<span><img alt='Qwasar Silicon Valley Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
