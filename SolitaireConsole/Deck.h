// -----------------------------------------------------------------------------
#ifndef Deck_H
#define Deck_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h"

#include "Card.h"

// -----------------------------------------------------------------------------

// Deck class definition 
class Deck
{
public:

	// creates a new standard 52-card French Deck 
	Deck();
	~Deck();

	int getSize(); // returns number of cards currently in the deck (initially 52 when a new deck is created) 

	int getTopIndex(); // returns index of top card in deck - initially 51 since new deck starts with top card at index 51 and cards are dealt from top down (initially) 

	void shuffle(); // shuffles the cards in the deck 

	vector<Card> getTopNCards(int n); // retrieves top n cards from top of deck and returns them as a vector - does not remove them from the deck (i.e. they remain on top of the deck after this method is called) 

	vector<Card> getBottomNCards(int n);// retrieves bottom n cards from bottom of deck and returns them as a vector - does not remove them from the deck (i.e. they remain on bottom after this method is called) 

	vector<Card> getRandomNCards(int n);// retrieves n random cards from anywhere within the current contents of the Deck and returns them as a vector - they are removed from wherever they were originally located within the Deck when this method is called (i.e. they are removed from wherever they were originally located within the Deck after this method is called) 

	vector<Card> getNCardsFromIndex(int n, int indexOfFirstCard);// retrieves n contiguous cards starting at index indexOfFirstCard within current contents of Deck and returns them as a vector - does not remove them from their original location within Deck after this method is called (i.e. they remain where they were originally located within Deck after this method is called)  */}

private:
	vector<Card> m_deck; // vector containing 52 cards - one for each card in a standard deck of cards

	int m_size; // number of cards currently in the deck (initially 52 when a new deck is created)
	int m_top; // index of top card in deck - initially 51 since new deck starts with top card at index 51 and cards are dealt from top down (initially)

	void initializeDeck(); // initialize a new deck with 52 cards - one for each card in a standard deck of cards 

	void dealTopCard(vector<Card>& hand); // deals top card from deck to hand passed in as parameter 

	void dealBottomCard(vector<Card>& hand); // deals bottom card from deck to hand passed in as parameter 

	void dealRandomCard(vector<Card>& hand); // deals random card from deck to hand passed in as parameter 

	void dealCustom(vector<Card>& hand, int numCards); // deals numCards from deck to hand passed in as parameter 

	void addToTopOfDeck(const vector<Card>& cardsToAdd); // adds cardsToAdd vector to top of deck 

	void addToBottomOfDeck(const vector<Card>& cardsToAdd); // adds cardsToAdd vector to bottom of deck 

	void printDeck(); // prints out all cards currently in the deck 

	bool canDealFromTop(); // returns true if there are still cards left to be dealt from top of deck, false otherwise 

	bool canDealFromBottom(); // returns true if there are still cards left to be dealt from bottom of deck, false otherwise 

	bool canDealRandomly(); // returns true if there are still cards left to be dealt randomly from deck, false otherwise 
};
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !Deck_H