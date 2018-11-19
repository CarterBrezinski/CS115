/*
Card.cpp
----
Within the card.cpp file, the following functions are present:
instantiate() - to create the deck itself
compare() - to compare the two decks to see who the winner is
*/
#include "card.h"
using namespace std;

/*
instantiate()
----
The instantiate function is what will be called to initially create the deck of cards.
It will return a string that contains all the variables for the "deck of cards"
*/
//Within the card.cpp file, the function for creating the deck of cards itself will be present
string instantiate()
{
	string deckString;
	int suit = 0;
	int ranking = 0;				//declare strings and integers
	Card deckOfCards[DECKSIZE];		//declare card array
	

	for (int i; i < DECKSIZE; i++)
	{
		 deckOfCards[i].rank = ranking;		//put card rankings into the card array
		 deckOfCards[i].suit = suit;		//put card suits into the card array

			ranking++;
		if (ranking = 13)
		{
			suit++;							//next suit
			ranking = 0;
		}
	}
	//Print the created deck, which will then be pulled 
	for (int i; i < DECKSIZE; i++)
	{
		deckString = deckString + (char)deckOfCards[i].suit + (char)deckOfCards[i].rank; //create char string, return it to game.cpp
	}
	return deckString;
}

/*
Compare()
----
The comparison function is an integer function, it takes in two "card" structs
compares them, and then returns which player ended up having the higher value card.
If the cards have the same rank (ie. 2 of diamonds and 2 of hearts),
then the cards will be compared via their suits.
The suits are printed (valuable to least valuable) as the following code suggests:
0 = spade
1 = heart
2 = diamond
3 = club
The winner return integer will then contain the winner of the comparison based on the comparison function.
player 1 winning: int = 1, player 2 winning: int = 2;
*/
int compare(Card drawnCard1,Card drawnCard2)
{
	int winner = 0;
	//rank first
	if (drawnCard1.rank == drawnCard2.rank)
	{
		//if ranks are of equal value, then move onto the suits
		//suits second
		if (drawnCard1.suit < drawnCard2.suit)
		{
			winner = 1;
		}
		if (drawnCard1.suit > drawnCard2.suit)
		{
			winner = 2;
		}
	}
	else if (drawnCard1.rank > drawnCard2.rank)
	{
		winner = 1;
	}
	else if (drawnCard1.rank < drawnCard2.rank)
	{
		winner = 2;
	}
	/*
	Because there are no duplicates in a deck of cards, a function comparing if two cards are the same
	in suit and rank is pointless. If it was a requirement to check every time if the cards are the same,
	it would be similar to the following:
	if(drawnCard1.rank == drawnCard2.rank && drawnCard1.suit == drawnCard2.suit)
	{
	cout << "the cards are the same" << endl;
	}
	*/
	return winner;
}