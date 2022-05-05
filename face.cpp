#include "hw09.h"

void face(std::vector<std::string> faceDeck)
{
	srand(time(0));

	int randFace = rand() % 13;

	bool noMatchFace = true;

	std::string face;

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

	if (face == faceDeck[randFace])
	{
		std::cout << "You win!" << std::endl << std::endl;
	}
	else std::cout << "You lose." << std::endl << "The card was a " << faceDeck[randFace] << std::endl << std::endl;
}
