// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "Deck.h"

// -----------------------------------------------------------------------------

// constructor for initializing a new 52-card standard French Deck
Deck::Deck() 
{
	initializeDeck();
}

// -----------------------------------------------------------------------------

// destructor for deallocating memory used by Deck object on heap when program terminates 
Deck::~Deck() 
{
	m_deck.clear();
}

// -----------------------------------------------------------------------------

// returns number of cards currently in the deck (initially 52 when a new deck is created) 
int Deck::getSize() 
{
	return m_size;
}

// -----------------------------------------------------------------------------

// returns index of top card in deck - initially 51 since new deck starts with top card at index 51 and cards are dealt from top down (initially) 
int Deck::getTopIndex() 
{
	return m_top;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------