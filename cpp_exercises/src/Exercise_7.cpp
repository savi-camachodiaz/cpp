#include "Exercise_7.h"

EX7::Exercise7::Exercise7()
{
}

EX7::Exercise7::~Exercise7()
{
}

int ex1_add(char charArr[])
{
  int counter = 0;

  for (int i = 0; charArr[i] != '\0'; i++)
  {

    counter++;

  }

  return counter;

}

void EX7::Exercise7::ex1()
{

  //PROG THAT COUNTS LETTERS FROM STRING

  char myString[30] = "John Soap MacTavish";
  printf("%s\n", myString);

  printf("This name has %d characters\n", ex1_add(myString));

}

int ex2_add(char string1_[], char string2_[])
{

  for (int i = 0; i < 32; i++)
  {

    if (string1_[i] != string2_[i])
    {

      return 0;

    }

  }

  return 1;

}

void EX7::Exercise7::ex2()
{

  //PROG THAT IMITATES strcmp, IF THEY ARE THE SAME RETURN 1 ELSE 0

  char string1[32] = "Hola";
  char string2[32] = "Hola";

  printf("%d\n", ex2_add(string1, string2));

}