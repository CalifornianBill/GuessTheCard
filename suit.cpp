#include "hw09.h"

void suit(std::vector<std::string> suitDeck)
{
	srand(time(0));

	int randSuit = rand() % 4;

	bool noMatchSuit = true;

	std::string suit;

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

	if (suit == suitDeck[randSuit])
	{
		std::cout << "You win!" << std::endl << std::endl;
	}
	else std::cout << "You lose." << std::endl << "The card was a " << suitDeck[randSuit] << std::endl << std::endl;
}

