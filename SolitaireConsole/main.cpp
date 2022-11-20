// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "Deck.h"

// -----------------------------------------------------------------------------

int main() {
	// create a new deck of cards 
	Deck deck;

	// shuffle the cards 
	deck.shuffle();

	// deal three random cards from the deck 
	vector<Card> randomCards = deck.getRandomNCards(3);

	// print out each random card that was dealt 
	for (int i = 0; i < randomCards.size(); ++i) 
	{
		cout << "random card " << i + 1 << ": ";
		randomCards[i].printCard();
		cout << endl;
	}

	// deal three cards from the bottom of the deck 
	vector<Card> bottomCards = deck.getBottomNCards(3);

	// print out each bottom card that was dealt 
	for (int i = 0; i < bottomCards.size(); ++i) 
	{
		cout << "bottom card " << i + 1 << ": ";
		bottomCards[i].printCard();
		cout << endl;
	}
	// deal three cards from the top of the deck   
	vector<Card> topCards = deck.getTopNCards(3);   
	
	// print out each top card that was dealt   
	for (int i = 0; i < topCards.size(); ++i)
	{
		cout << "top card " << i + 1 << ": ";      
		topCards[i].printCard();       
		cout << endl;   
	}   
	
	system("pause");   
	
	return 0;

}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------