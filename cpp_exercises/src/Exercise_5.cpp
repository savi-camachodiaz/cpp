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



void EX5::Exercise5::ex2()
{

	//PROG THAT ASK A NUMBER AND DISPLAYS IT ON SCREEN, THEN USE OTHER FUNCTION TO TRIPLE ITS VALUE

	int num;

}

void EX5::Exercise5::ex3()
{
}

void EX5::Exercise5::ex4()
{
}
