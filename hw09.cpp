#include "hw09.h"

int main()
{
	std::vector<std::string> faceDeck{ "ace", "2", "3", "4", "5", "6", "7",
									   "8", "9", "10", "jack", "king", "queen" };

	std::vector<std::string> suitDeck{ "spades", "hearts", "diamonds", "clubs" };

	char choice;
	bool loopSwitch = true;

	while (loopSwitch)
	{
		std::cout << "Want to play?" << std::endl;
		std::cout << "1. Guess the face of the card" << std::endl;
		std::cout << "2. Guess the suit of the card" << std::endl;
		std::cout << "3. Guess both the face and suit" << std::endl;
		std::cout << "4. Played Enough" << std::endl;
		std::cout << "Enter your choice: ";

		std::cin >> choice;
		std::cin.ignore();
		std::cout << std::endl;

		if(choice != '1' || choice != '2' || choice != '3' || choice != '4')
		switch (choice)
		{
		case '1':
			face(faceDeck);
			break;

		case '2':
			suit(suitDeck);
			break;

		case '3':
			both(faceDeck, suitDeck);
			break;

		case '4':
			std::cout << "Thanks for playing!" << std::endl;
			loopSwitch = false;
			break;

		default:
			std::cout << "Invalid Choice." << std::endl;
		}
	}
	return 0;
}
