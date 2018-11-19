/*
NAME:Carter Brezinski
SID: 200391111
DATE: 10/11/2018
CS115 ASSIGNMENT: 2
----
Purpose:
The purpose of this program is to correctly simulate a deck of structures, the mainipulation of said deck, and the actual use of
the deck in a game like fashion.
*/
#include "card.h"
#include "random.h"		//including necessary packages to assist in the program running properly
using namespace std;


/*
The game.cpp file is considered the final product or the main.cpp for the assignment. Within it, all the functions previously created
will be used in some way.
----
The program will need to contain the initial deck
Thus it will need to be created below:
The initial deck (or a copy of it) will then need to be sent to the "shuffle function"
The shuffle function will then send back a "shuffled deck" string, that will then be used in the program below
after being converted back to a "deck".
----
The actual game file:
The actual game file consists of 3 rounds, which can be used in a for loop.
Within this for loop, the drawing cards function and the card comparison functions will be present
A counter will exist to keep track of each players points
----
For loop (3 rounds):
{
Player 1 draws
- convert card drawn from array into value form for print
Player 2 draws
- convert card drawn from array into value form for print
Compare the two cards with one another
if statement, Winner gets point
}
At the end of the "game" procedure, the following will be done:
In two groups of three, the players cards are printed on each individual line.
(this means they will have to be kept as seperate variables, or nothing will be printed up until the final round)
Print the scores of each player
Compare the two scores, with the comparison function, whichever player has the higher value wins.
Print "The winner is _____"
*/

int main()
{
	initializeWithDefaultSeed(); //Initializing the random seed for the program.
	string deckString;
	Card deckOfCards[DECKSIZE]; //declaring the initial deck, which will have 52 positions present inside of it.
	deckString = instantiate();
	int counter; //counter variable used in converting the string back into a cardDeck format.

	//Converting deckString back into card[] file
	for (int i; i < 104; i = i+2)
	{
		int j = i + 1;
		counter = i / 2;
		deckOfCards[counter].rank = deckString[j]; //putting the values from the string into the deckOfCards struct array
		deckOfCards[counter].suit = deckString[i];
	}

	deckString = shuffle(deckOfCards);

	string suits[4] = { "Spade", "Heart", "Diamond", "Club" };
	int value[13] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
	  
	Card drawnCard1;			//creating the single drawnCards1&2 for their respective players.
	Card drawnCard2;
	string temp;
	int player1Score = 0;		//declaring the player scores and array scraping integers i&j
	int player2Score = 0;
	int i = 0;
	int j = 1;
	//The round system is what will make the game repeat 3 times
	for (int round = 0; round < 3; round++)
	{	
		//cout << "Round " + round + ": " << endl;
		int winner = 0;
		//draw p1 
		drawnCard1 = deckOfCards[i];
		//print round_ player1 draw
		
		if (value[drawnCard1.rank] == 11)
			temp = "Jack";
		else if (value[drawnCard1.rank] == 12)
			temp = "Queen";
		else if (value[drawnCard1.rank] == 13)
			temp = "King";
		else if (value[drawnCard1.rank] == 14)
			temp = "ace";
		else
			cout << "Player 1 drew: " << suits[drawnCard1.suit] << " " << value[drawnCard1.rank];
		
		i = i + 2;
		//draw p2
		drawnCard2 = deckOfCards[j];
		//print round_ player2 draw

		if (value[drawnCard2.rank] == 11)
			temp = "Jack";
		else if (value[drawnCard2.rank] == 12)
			temp = "Queen";
		else if (value[drawnCard2.rank] == 13)
			temp = "King";
		else if (value[drawnCard2.rank] == 14)
			temp = "ace";
		else
			cout << "Player 1 drew: " << suits[drawnCard2.suit] << " " << value[drawnCard2.rank];
		
		j = j + 2;

		//call compare function
		winner = compare(drawnCard1, drawnCard2);
		//winner will be sent back from compare, with whoever won the comparison.
		if (winner == 1)
		{
			player1Score++;
		}
		else if (winner == 2)
		{
			player2Score++;
		}
	}
	//declaring the winner
	if (player1Score > player2Score)
	{
		cout << "Player 1 wins" << endl;
	}
	else
	{
		cout << "Player 2 wins" << endl;
	}
	return 0;
}

