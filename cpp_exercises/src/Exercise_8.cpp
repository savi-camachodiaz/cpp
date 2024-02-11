#include "Exercise_8.h"

EX8::Exercise8::Exercise8()
{
}

EX8::Exercise8::~Exercise8()
{
}

void EX8::Exercise8::ex1()
{

  //PROG: DEFINE NEW STRUCT CALLED "Vector" WITH 2 FLOATS X, Y
  //      DEFINE VARIABLE TYPE Vector AS Vector1 INITIALIZED AS 0
  //      DEFINE VARIBALE TYPE Vector AS Vector2 INITIALIZED X = 5 Y = 3
  //      ASIGN X = 4 Y = 2 TO Vector1
  //      DEFINE VARIABLE TYPE Vector AS Vector3 AS SUM OF OTHER THE OTHER 2
  //      DISPLAY ON SCREEN Vector3

  Vector Vector1 = {};
  Vector Vector2 = { 5, 3 };
  Vector Vector3;

  Vector1.x = 4;
  Vector1.y = 2;

  Vector3 = { Vector1.x + Vector2.x, Vector1.y + Vector2.y };

  printf("Vector 3 = %.1fx, %.1fy\n", Vector3.x, Vector3.y);

}

void EX8::Exercise8::ex2()
{

  //PROG: DEFINE NEW STRUCT CALLED "InfoPlayer" WITH STRIGN NAME[16], INT BDAY, INT MAXSCORE
  //      DEFINE VARIABLE TYPE InfoPlayer AND scanf_s ALL PARAMETERS
  //      DISPLAY ON SCREEN ALL THE INFO

  InfoPlayer player = {};

  printf("Enter your nickname\n");
  scanf_s("%s", &player.name, sizeof(player.name));
  printf("Enter your year of birth\n");
  scanf_s("%d", &player.year);
  printf("Enter your score\n");
  scanf_s("%d", &player.maxScore);

  printf("Your nick name is: %s\n", player.name);
  printf("Your year of birth is: %d\n", player.year);
  printf("Your max score is: %d\n", player.maxScore);

}

int ex3_add(EX8::Exercise8::Vector vec1_, EX8::Exercise8::Vector vec2_)
{

  if (vec1_.x != vec2_.x || vec1_.y != vec2_.y)
  {

    return 0;

  }
  else
  {

    return 1;

  }

}

void EX8::Exercise8::ex3()
{

  //PROG: WITH STRUCT Vector, CREATE A FUNCTION THAT CHECK IF 2 VECTORS ARE EQUAL, 1 TRUE, 0 FALSE
  //      DEFINE 2 VARIABLES TYPE Vector AND CHECK IF THEY ARE THE SAME WITH THE PREV FUNCTION
  //      DISPLAY THE RESULT ON SCREEN

  Vector vector1 = { 1, 4 };
  Vector vector2 = { 1, 3 };

  printf("%d\n", ex3_add(vector1, vector2));

}
