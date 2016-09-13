// Imports
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;


// A game where the user will try to guess the number the computer comes up with.
main(){
	// Creates the random number
	int number;
	srand(time(NULL));
	number = rand()%100+1;
	// Play/End the game
	bool play = true;
	// The number the player guesses
	int guess;
	// Number of guesses used
	int guesses = 0;
	// Decides bool play
	char playagain [2];
	

	// Continues until player gets a correct answer and ends the game
	while(pla:y == true){
		
		// Inputs the guess and outputs number of guesses used so far
		cout << "What is your guess?\n";
		cin >> guess;
		guesses++;
		cout << "You have used " << guesses << " guess(es).\n";
		
		// Guess is too high
		if(guess > number){
			cout << guess << " is too high.\n";
		}

		// Guess is too low
		if(guess < number){
			cout << guess << " is too low.\n";
		}

		// Correct guess! Asks if you want to play again, quits loop if not
		if(guess == number){
			cout << guess << " is correct!\n";
			cout << "Play again? Answer Y or N\n";
			cin >> playagain;
			if(!strcmp("Y",playagain)){
				guesses = 0;
				number = rand()%100+1;
			}
			else{
				play = false;
			}
		}
	}
}
