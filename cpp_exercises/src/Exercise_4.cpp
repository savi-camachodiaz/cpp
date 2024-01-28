#include "Exercise_4.h"

EX4::Exercise4::Exercise4()
{
}

EX4::Exercise4::~Exercise4()
{
}

void EX4::Exercise4::ex1()
{

	//PROG THAT CHANGES BETWEEN INVISIBLE AND VISIBLE. USE WHILES

  bool invs = true;
	int loops = 0;

	while (loops < 14)
	{

		invs = !invs;
		loops++;

	}

	if (invs)
	{

		printf("You are visible\n");

	}
	else
	{
		printf("You are invisible\n");
	}

}

void EX4::Exercise4::ex2()
{

  //USING THE PAST EXERCISE OF HP, ASK THE HP OF 3 CHARACTERS INSTEAD OF 1. USE FOR

  int hp;

  for (int i = 0; i < 3; i++)
  {

    printf("Set HP to character %d\n", i + 1);
    scanf_s("%d", &hp);

    if (hp <= 0)
    {

      hp = 0;
      printf("Game Over, Your HP is 0\n\n");

    }
    else if (hp >= 100)
    {

      hp = 100;
      printf("Good Job, Your HP is at max 100\n\n");

    }
    else if (hp <= 50 && hp > 0)
    {

      printf("Warning, Your HP is 50 or less\n\n");

    }
    else if (hp > 50 && hp < 100)
    {

      printf("Good, Your HP is more than 50\n\n");

    }

  }

}

void EX4::Exercise4::ex3()
{

  //PROG THAT DISPLAY ON SCREEN JUST EVEN NUMBERS UNTIL 10. USE FOR

  for (int i = 0; i < 11; i++)
  {

    if (i % 2 == 0)
    {

      printf("%d\n\n", i);

    }

  }

}

void EX4::Exercise4::ex4()
{

  //PROG THAT DISPLAYS ON SCREEN:
  //  00  01  02
  //  10  11  12
  //  20  21  22

  for (int i = 0; i < 3; i++)
  {

    for (int j = 0; j < 3; j++)
    {

      printf("  %d%d", i, j);

    }

    printf("\n");

  }

}
