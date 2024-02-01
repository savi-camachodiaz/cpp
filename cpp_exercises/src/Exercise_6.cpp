#include "Exercise_6.h"

EX6::Exercise6::Exercise6()
{
}

EX6::Exercise6::~Exercise6()
{
}

void EX6::Exercise6::ex1()
{

  //PROG THAT ASK 10 NUMBERS, THEN STORE IT IN ARRAY. FINALLY DISPLAY THEM ON SCREEN

  int num[10];

  for (int i = 0; i < 10; i++)
  {

    printf("Give me a number:\n");
    scanf_s("%d", &num[i]);

  }

  printf("The numbers you gave me are:\n");

  for (int i = 0; i < 10; i++)
  {

    printf("%d\n", num[i]);

  }

}

void EX6::Exercise6::ex2()
{

  //USING LAST EX, COPY THE GIVEN ARRAY OF NUMBERS IN OTHER ARRAY AND THEN DISPLAY ON SCREEN

  int num[10];
  int auxNum[10];

  for (int i = 0; i < 10; i++)
  {

    printf("Give me a number:\n");
    scanf_s("%d", &num[i]);

  }

  printf("The numbers you gave me are:\n");

  for (int i = 0; i < 10; i++)
  {

    auxNum[i] = num[i];
    printf("Numero aux: %d\n", auxNum[i]);

  }

}

void EX6::Exercise6::ex3()
{

  //PROG THAT ASK 10 NUMBERS BUT THIS MUST BE 0 OR 1, THEN COPY ALL OF THEM BUT FIRST THE 0 THEN THE 1

  int num[10];
  int auxNum[10];

  for (int i = 0; i < 10; i++)
  {

    printf("Give me 0 or 1:\n");
    scanf_s("%d", &num[i]);

  }

  int pos = 0;
  for (int i = 0; i < 10; i++)
  {

    if (num[i] == 0)
    {

      auxNum[pos] = num[i];
      pos++;

    }

  }

  for (int i = 0; i < 10; i++)
  {

    if (num[i] == 1)
    {

      auxNum[pos] = num[i];
      pos++;

    }

  }

  printf("Now this are the numbers in order:\n");

  for (int i = 0; i < 10; i++)
  {

    printf("%d\n", auxNum[i]);

  }

}
