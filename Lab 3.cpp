// C++ Program			Lab 3.cpp
// Course				CSE1311/W01
// Name:				Hakeem Wilson
// Assignment #:		Lab 3 
// Due Date:			02/10/2019

/*Purpose: The purpose of this program is to aallow the user to play Rock, Paper Scissors, against a random generator.
The program makes use of a random generator, if and else statements, along with switches.*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	char RPS;
	int computer;
	char result;
	unsigned int seed;

	//Instructions
	cout << endl;
	cout << "This is a game of Rock, Paper, Scissors! " << endl;
	cout << endl;
	cout << "Choose Rock, Paper, or Scissors " << endl;
	cout << endl;
	cout << "The choices are: " << endl;
	cout << "R = Rock" << endl;
	cout << "P = Paper" << endl;
	cout << "S = Scissors" << endl;
	cout << endl;
	cout << "What do you choose?" << endl;
	cout << endl;

	//Player Input
	cin >> RPS;
	cout << endl;

	//If/Else Statements
	if (RPS == 'R')
	{
		cout << "You picked Rock" << endl;
		cout << "Now it's the computer's turn: " << endl;
	}
	else if (RPS == 'P')
	{
		cout << "You chose Paper" << endl;
		cout << "Now it's the computer's turn: " << endl;
	}
	else if (RPS == 'S')
	{
		cout << "You chose Scissors" << endl;
		cout << "Now it's the computer's turn: " << endl;
	}

	//**************************************************************************************************

			//Random Generator
	seed = time(0);
	srand(seed);
	computer = rand() % 3 + 1;

	//Switch Statements
	switch (computer)
	{
	case 1: cout << "The computer chose Rock" << endl;
		break;
	case 2: cout << "The computer chose Paper" << endl;
		break;
	case 3: cout << "The computer chose Scissors" << endl;
		break;
	}

	//**************************************************************************************************

			//scans for all winning combinations
	if (RPS == 'R' && computer == 3)
	{
		cout << "Rock crushes scissors!" << endl;
		cout << "You win!" << endl;
	}
	else if (RPS == 'P' && computer == 1)
	{
		cout << "Paper covers rock!" << endl;
		cout << "You win!" << endl;
	}
	else if (RPS == 'S' && computer == 2)
	{
		cout << "Scissors cut paper!" << endl;
		cout << "You win!" << endl;
	}

	//scans for all tie combinations
	if ((RPS == 'R' && computer == 1) || (RPS == 'P' && computer == 2) || (RPS == 'S' && computer == 3))
	{
		cout << "It's a tie!";
	}

	//scans for all losing combinations
	if (RPS == 'R' && computer == 2)
	{
		cout << "Paper covers rock!" << endl;
		cout << "You lose!";
	}
	else if (RPS == 'P' && computer == 3)
	{
		cout << "Scissors cut paper!" << endl;
		cout << "You lose!";
	}
	else if (RPS == 'S' && computer == 1)
	{
		cout << "Rock crushes scissors!" << endl;
		cout << "You lose!";
	}

	cout << "This was coded by Hakeem Wilson" << endl;
	system("PAUSE");
	return 0;
}
