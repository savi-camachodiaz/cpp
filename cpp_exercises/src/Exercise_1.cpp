#include <Exercise_1.h>

#define MULTIPLIER 2

EX1::Exercise1::Exercise1()
{
}

EX1::Exercise1::~Exercise1()
{
}

void EX1::Exercise1::ex1()
{

  //PROG THAT ASK 2 INT NUMBERS AND DISPLAY THEIR SUM ON THE SCREEN

  int num1, num2;

  printf("Give 2 numbers:\n");
  scanf_s("%d", &num1);
  scanf_s("%d", &num2);
  printf("The result of adding both numbers is: %d\n", num1 + num2);

}

void EX1::Exercise1::ex2()
{

  //PROG THAT ASK 2 FLOAT NUMBERS AND DISPLAY THE AVERAGE VALUE OF THEIR SUM

  float num1, num2;

  printf("Give 2 numbers:\n");
  scanf_s("%f", &num1);
  scanf_s("%f", &num2);
  printf("The average of the 2 numbers is: %.3f\n", (num1 + num2) / 2);

}

void EX1::Exercise1::ex3()
{

  //PROG THAT DISPLAYS THE HEART RATE OF A PERSON WITH THE FORMULA (200 - AGE) / 10

  unsigned short int age;

  printf("Give an age for your runner:\n");
  scanf_s("%hu", &age);
  printf("The Heart Rate of your runner at the age of %hu is: %.2f\n", age, (200 - (float)age) / 10);

}

void EX1::Exercise1::ex4()
{

  //PROG THAT ASKS A NUMBER AND THEN MULTIPLIES IT WITH A DEFINED PARAMETER

  unsigned short int hp;

  printf("Give hp to your player:\n");
  scanf_s("%hu", &hp);
  printf("Your player have healed %.2f points of hp because you used a potion\n", (float)hp * MULTIPLIER);

}

void EX1::Exercise1::ex5()
{

  //HELLO WORLD EXERCISE

  characters myPlayer = GREEN_MARIO;

  printf("HELLO WORLD\n");

  int hpMario = 50;

  printf("Hp of Mario is: %d\n", hpMario);

  int hpLuigi;

  printf("Give hp to Luigi: ");
  scanf_s("%d", &hpLuigi);
  printf("\nHp of Luigi is: %d\n", hpLuigi);

  float hpNewPlayer = 30.0f;
  printf("Hp of NewPlayer is: %.1f\n", hpNewPlayer);

}