#include "Exercise_3.h"

EX3::Exercise3::Exercise3()
{
}

EX3::Exercise3::~Exercise3()
{
}

void EX3::Exercise3::ex1()
{

  //PROG THAT ASK THE HP, IF HP IS LESS THAN 0 THEN SET TO 0, ELSE IF HP IS GREATER THAN 100 THEN SET TO 100, THEN DISPLAY ON SCREEN IF THE PALYER HAS MAX HP(100), IF HAS NO HP (0) OR IF HP IS GREATER O LESS THAN 50

  int hp;

  printf("Set HP to your player\n");
  scanf_s("%d", &hp);

  if (hp <= 0)
  {

    hp = 0;
    printf("Game Over, Your HP is 0\n");
  
  }
  else if(hp >= 100)
  {

    hp = 100;
    printf("Good Job, Your HP is at max 100\n");
  
  }
  else if (hp <= 50 && hp > 0)
  {

    printf("Warning, Your HP is 50 or less\n");
  
  }
  else if (hp > 50 && hp < 100)
  {
    
    printf("Good, Your HP is more than 50\n");
  
  }

}

void EX3::Exercise3::ex2()
{

  //PROG THAT ASKS FOR 2 NUMBERS AND THEN DISPLAY ON SCREEN IN DESCENDING ORDER

  int numA, numB;

  printf("Enter a number:\n");
  scanf_s("%d", &numA);
  printf("Enter another number:\n");
  scanf_s("%d", &numB);

  if (numA > numB)
  {

    printf("The numbers are: %d and %d\n", numA, numB);
    printf("%d is bigger than %d\n", numA, numB);
  
  }
  else if (numA == numB)
  {

    printf("Both numbers are the same\n");
  
  }
  else if (numB > numA)
  {
    
    printf("The numbers are: %d and %d\n", numA, numB);
    printf("%d es mayor que %d\n", numB, numA);
  
  }
}

void EX3::Exercise3::ex3()
{

  //PROG THAT IMITATES A CHARACTER SELECTION SCREEN
  
  characters playerOne;
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
      playerOne = MARIO;
      printf("Your character is Mario\n");
      break;
    
    }
    case 1:
    {
      
      playerOne = SONIC;
      printf("Your character is Sonic\n");
      break;

    }
    case 2:
    {

      playerOne = KIRBY;
      printf("Your character is Kirby\n");
      break;

    }
    case 3:
    {

      playerOne = LINK;
      printf("Your character is Link\n");
      break;

    }

  }

}