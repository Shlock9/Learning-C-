// RockPaperScissorsLizardSpock.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <random>
#include <conio.h>
using namespace std;

// this program was written by Evan Doerksen
// simple game of rock paper scissors lizard spock

int getInput() {
	
	// validates any input entered by the user
	// input should only be the digits: 0, 1, 2, 3, 4, throws an error otherwise

	string input;
	int stringAsInt;
	bool validInput = false;
	bool error = false;

	// check input
	while (!validInput) {

		error = false;
		cout << "Enter (0) Rock, (1) Scissors, (2) Spock, (3) Paper, (4) Lizard\n";
		cin >> input;
		if (input.find_first_not_of("01234") != string::npos) {
			// checks for non specified numbers
			error = true;
			cout << "not a correct digit\n";
		}
		else if (input.length() > 1) {
			// checks for larger than specified input
			error = true;
			cout << "too long\n";
		}

		if (error) {
			cout << "Invalid Input, try again\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			validInput = true;
		}

		if (validInput) {
			string::size_type sz; // alias of size_t
			stringAsInt = stoi(input, &sz); // converts the supposed string into an integer
			// empties buffer for next round
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	return stringAsInt;
}

string getMove(int moveInt) {
	
	// converts the move into a string for display
	// takes an integer of the move entered
	string move;
	// we need to break after every switch case or we fall through into the next case
	switch (moveInt) {
	case 0:
		move = "Rock";
		break;
	case 1:
		move = "Scissors";
		break;
	case 2:
		move = "Spock";
		break;
	case 3:
		move = "Paper";
		break;
	case 4:
		move = "Lizard";
		break;
	}

	return move;
}

int outcome(int p1, int bot) {
	// returns 0 if tie
	// returns 1 if p1 wins, 2 otherwise
	// inputs are the moves of the players and the associated numbers of them
	int result = 0;
	// tie
	if (p1 == bot) {
		result = 0;
		return result;
	}
	// p1 wins
	switch (p1) {
	case 0:
		// p1 wins
		if (bot == 1 || bot == 0) {
			result = 1;
		}
		// bot wins
		else {
			result = 2;
		}
		break;
	case 1:
		// p1 wins
		if (bot == 4 || bot == 3) {
			result = 1;
		}
		// bot wins
		else {
			result = 2;
		}
		break;
	case 2:
		// p1 wins
		if (bot == 1 || bot == 0) {
			result = 1;
		}
		// bot wins
		else {
			result = 2;
		}
		break;
	case 3:
		// p1 wins
		if (bot == 0 || bot == 2) {
			result = 1;
		}
		// bot wins
		else {
			result = 2;
		}
		break;
	case 4:
		// p1 wins
		if (bot == 2 || bot == 3) {
			result = 1;
			break;
		}
		// bot wins
		else {
			result = 2;
		}
		break;
	}
	return result;
}


int main() {

	bool gameEnd = false;
	bool validInput = false;

	int p1Score = 0;
	int botScore = 0;
	int playerInput = 0;
	int botInput;
	int result;

	string winner;
	string p1move;
	string botmove;

	srand(3275857391837548534); // random number seed

	// main game loop
	while (!gameEnd) {

		// get input
		playerInput = getInput();
		botInput = rand() % 4;
		
		// display move
		p1move = getMove(playerInput);
		botmove = getMove(botInput);
		cout << "player1 chose: " << p1move << ", the bot chose: " << botmove << "\n";

		// move outcome
		result = outcome(playerInput, botInput);

		// score increase and win conditional
		if (result == 0) {
			cout << "Its a tie! No one wins this round!\n";
		}
		if (result == 1) {
			cout << p1move << " Defeats " << botmove << "!\n";
			p1Score = p1Score + 1;
			if (p1Score == 3) {
				winner = "player One";
				gameEnd = true;
			}
		}
		else if (result == 2) {
			cout << botmove << " Defeats " << p1move << "!\n";
			botScore = botScore + 1;
			if (botScore == 3) {
				winner = "Bot";
				gameEnd = true;
			}
		}
		cout << "Current score: Player 1: " << p1Score << ", Bot: " << botScore << " \n";
	}
	// winner statement
	cout << "\nThe winner is " << winner << " with a score of " << p1Score << ":" << botScore << "\n";
	return 0;
}
