#include <Exercise_2.h>

EX2::Exercise2::Exercise2()
{
}

EX2::Exercise2::~Exercise2()
{
}

void EX2::Exercise2::ex1()
{

  //PROG THAT GIVES, IN DAYS, YOUR ACTUAL AGE

  int res = (YEAR_A - YEAR_B) * 365;
  printf("Your age %d in days is %d\n", YEAR_A - YEAR_B, res);

}

void EX2::Exercise2::ex2()
{

  //PROG THAT ASK FOR 2 NUMBERS AND DISPLAY ON SCREEN THE SUM, RES, DIV, MULT AND MODULE OF THEM
  
  float numA, numB;
  printf("Give me a number:\n");
  scanf_s("%f", &numA);
  printf("Give another number:\n");
  scanf_s("%f", &numB);
  printf("The sum of the numbers is: %.1f\n", numA + numB);
  printf("The res of the numbers is: %.1f\n", numA - numB);
  printf("The div of the numbers is: %.1f\n", numA / numB);
  printf("The mult of the numbers is: %.1f\n", numA * numB);
  printf("The module of the numbers is: %d\n", (int)numA % (int)numB);

}

void EX2::Exercise2::ex3()
{

  //PROG THAT ASKS ABOUT THE CIRCLE RADIUS AND CALCULATES THE AREA (PI * R^2) OF IT. USE PI AS DEFINE

  float rad;
  printf("Set the radius of the circle\n");
  scanf_s("%f", &rad);
  printf("The are of the circle is %.1f\n", pow(rad, 2) * PI);

}