// -----------------------------------------------------------------------------
#ifndef Card_H
#define Card_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

// Card class definition
class Card 
{
	// constructor for initializing card objects with rank and suit
public: 
	Card(int rank, int suit);

	// getter and setter methods for m_rank and m_suit private data members
	int getRank(); // returns rank of the card (1-13)
	void setRank(int rank); // sets rank of the card (1-13)
	int getSuit(); // returns suit of the card (1-4)
	void setSuit(int suit); // sets suit of the card (1-4)

	void printCard(); // prints out the Card object as a string in the format: "rank of suit" (e.g. "Ace of Spades", "Two of Hearts", ...)

	bool isRed(); // returns true if the card is red, false otherwise

	bool isBlack(); // returns true if the card is black, false otherwise

	bool isSameSuit(Card otherCard); // returns true if this Card object has the same suit as another Card object passed in as a parameter, false otherwise

	bool isNextRank(Card otherCard); // returns true if this Card object has a rank that is one greater than another Card object passed in as a parameter, false otherwise

private:
	int m_rank; // rank of the card (1-13)
	int m_suit; // suit of the card (1-4)
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !Card_H