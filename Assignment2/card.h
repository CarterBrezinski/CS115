/*
Card.h
----
Within the card.h file, it will contain all declarations and necessary inclusion files for all the functions that call on it.
*/
#include <string>
#include <iomanip>		//include packages necessary for the game.cpp, shuffle.cpp, and card.cpp files
#include <iostream>
using namespace std;

unsigned const int DECKSIZE = 52;	//delcaring constant for a deck size of 52 cards.

//Initializing/declaring functions that will be used in the card.cpp, game.cpp, and shuffle.cpp files.
int compare(Card drawnCard1, Card drawnCard2); //the comparison function will return a string indicating the winner of comparisons
string shuffle(Card deckOfCards[DECKSIZE]); 
string instantiate();

//The struct 'base' outline for all other cards used in the program. They will simply contain a suit and a ranking
struct Card
{
	int suit;		//My initial plan was a string and integer struct for the program, but having both as integers simplified the final printout
	int rank;
};

