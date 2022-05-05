#include "hw09.h"

void both(std::vector<std::string> faceDeck, std::vector<std::string> suitDeck)
{
	srand(time(0));

	int randSuit = rand() % 4;
	int randFace = rand() % 13;

	bool noMatchSuit = true;
	bool noMatchFace = true;

	std::string suit;
	std::string face;

	while (noMatchSuit)
	{
		std::cout << "Enter the suit: ";
		getline(std::cin, suit);

		try
		{
			for (int x = 0; x < 4; x++)
			{
				if (suit == suitDeck[x]) noMatchSuit = false;
			}

			if (noMatchSuit) throw "Invalid Entry";
		}

		catch (const char* exp)
		{
			std::cout << "ERROR: " << exp << std::endl << std::endl;
		}
	}


	while (noMatchFace)
	{
		std::cout << "Enter the face: ";
		getline(std::cin, face);

		try
		{
			for (int x = 0; x < 13; x++)
			{
				if (face == faceDeck[x]) noMatchFace = false;
			}

			if (noMatchFace) throw "Invalid Entry";
		}

		catch (const char* exp)
		{
			std::cout << "ERROR: " << exp << std::endl << std::endl;
		}
	}

	if (suit == suitDeck[randSuit] && face == faceDeck[randFace])
	{
		std::cout << "You win!" << std::endl << std::endl;
	}
	else std::cout << "You lose." << std::endl << "The card was a " << faceDeck[randFace] << " of " << suitDeck[randSuit] << std::endl << std::endl;
}
