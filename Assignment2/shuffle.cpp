//For the shuffle function, it will receive the "Original" basic rendered deck which is present in an array
//the purpose of the shuffle function is to quite literally shuffle the deck, instead of a normal shuffle, it will be completely random

//Because of this, the shuffle function will require access to the random and card files.



#include "card.h"
#include "random.h"
#include <string>			//Declare necessary packages for this function
using namespace std;

/*
The shuffle function will be presented similar to the following:
----
A for loop will be present, stepping through the array from values 0(card 1) to 51(card 52)
Within this for loop, the current position [i] in the array will be randomly swapped with a position elsewhere in the array
They will be swapped by making a holder position, setting [i] = [holder], [i] = [j], and [j] = [holder]
----
That for loop will continue on for each position in the deck array, and it will result in a shuffled deck array
This shuffled deck array will then be returned to the user/the game.cpp file
*/
string shuffle(struct Card deckOfCards[DECKSIZE])
{
	string shuffledDeckString;	//this will be the variable that is passed back to the program
	int suitHolder;				//this will hold the suit variable present in the current position pre-swap
	int rankHolder;				//this will hold the rank variable present in the current position pre-swap

	for (int i = 0; i < 52; i++)
	{
		int j = nextRandomInRange(DECKSIZE);	//finding the random position for the 52 cards
		suitHolder = deckOfCards[i].suit;		//holding the current place of the suit and the ranking
		rankHolder = deckOfCards[i].rank;
		deckOfCards[i] = deckOfCards[j];		//setting the current position of the card to the randomly chosen spot
		deckOfCards[j].suit = suitHolder;		//replacing the 
		deckOfCards[j].rank = rankHolder;
	}

	//The purpose of the code below is to take the individual places of the deckOfCards array and to convert it to 
	//a string labelled shuffledDeckString, this string will contain both the suit and rank in number order
	//this will then be returned back to game.cpp to be used in the game function.
	for (int i; i < DECKSIZE; i++)
	{
		shuffledDeckString = shuffledDeckString + (char)deckOfCards[i].suit + (char)deckOfCards[i].rank;
	}

	return shuffledDeckString;
}

