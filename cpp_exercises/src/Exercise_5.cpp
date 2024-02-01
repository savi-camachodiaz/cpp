#include "Exercise_5.h"

EX5::Exercise5::Exercise5()
{
}

EX5::Exercise5::~Exercise5()
{
}

bool ex1_add(int num_)
{

	if (num_ % 2 == 0)
	{

		return true;

	}

	return false;

}

void EX5::Exercise5::ex1()
{

	//PROG THAT GETS A NUMBER AND RETURNS TRUE IF EVEN OR FALSE IF ODD

	int num;

	printf("Give me a number:\n");
	scanf_s("%d", &num);

	if (ex1_add(num))
	{

		printf("Your number is Even\n");

	}
	else
	{

		printf("Your number is Odd\n");

	}

}

int ex2_add(int num_)
{

	return num_ * 3;

}

void EX5::Exercise5::ex2()
{

	//PROG THAT ASK A NUMBER AND DISPLAYS IT ON SCREEN, THEN USE OTHER FUNCTION TO TRIPLE ITS VALUE

	int num;

	printf("Give me a number\n");
	scanf_s("%d", &num);

	printf("Your number is %d\n", num);
	printf("The number I give You back is %d\n", ex2_add(num));

}

int ex3_add(int hr_, int mn_, int sc_)
{

	return hr_ * 60 * 60 + mn_ * 60 + sc_;

}

void EX5::Exercise5::ex3()
{

	//PROG THAT ASK ABOUT 3 VARIABLES, HOURS MINUTES AND SECONDS, THEN DISPLAY ON SCREEN THE RESULT

	int hr, mn, sc;

	printf("Give me hours\n");
	scanf_s("%d", &hr);
	printf("Give me minutes\n");
	scanf_s("%d", &mn);
	printf("Give me seconds\n");
	scanf_s("%d", &sc);

	printf("The final time You get is %d seconds\n ", ex3_add(hr, mn, sc));

}

void ex4_add(char letter_)
{

	if (letter_ == 'a' || letter_ == 'e' || letter_ == 'i' || letter_ == 'o' || letter_ == 'u')
	{

		printf("Your letter is a vowel\n");

	}
	else
	{
		printf("Your letter is a consonant\n");
	}

}

void EX5::Exercise5::ex4()
{

	//PROG THAT ASK ABOUT A LETTER, THEN USE A FUNCTION TO CHECK IF IS A VOWEL OR CONSONANT

	char letter;

	printf("Please enter a single letter\n");
	scanf_s("%c", &letter, sizeof(letter));

	ex4_add(letter);

}

EX5::playableCharacters ex5_add(EX5::playableCharacters character_)
{
	printf("OH NO, ERROR HAS HAPPENED, NOW YOU PLAY AS PETER\n");

	return EX5::playableCharacters::PETER;

}

void EX5::Exercise5::ex5()
{

	//PROG THAT USES AN ENUM OF PLAYABLE CHARACTERS, THE USER WILL CHOOSE ONE OF THEM, THEN USE A FUNCTION TO CHANGE THE CHARACTER TO ONE PRE DEFINED

	playableCharacters playerOne;
	int playerValue;

	printf("Please select your character: 1, 2, 3 or 4\n");
	scanf("%d", &playerValue);
	playerValue--;

	switch (playerValue)
	{

		default:
		{
			printf("Please select a valid Character");
			break;

		}
		case 0:
		{
			playerOne = PETER;
			printf("Your character is Peter\n");
			break;

		}
		case 1:
		{

			playerOne = MILES;
			printf("Your character is Miles\n");
			break;

		}
		case 2:
		{

			playerOne = GWEN;
			printf("Your character is Gwen\n");
			break;

		}
		case 3:
		{

			playerOne = MIGUEL;
			printf("Your character is Miguel\n");
			break;

		}

	}

	playerOne = ex5_add(playerOne);

}