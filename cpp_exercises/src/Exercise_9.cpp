#include "Exercise_9.h"

EX9::Exercise9::Exercise9()
{
}

EX9::Exercise9::~Exercise9()
{
}

void EX9::Exercise9::ex1()
{

  //PROG: VARIABLE INT NUM = 3
  //      PRINT MEMORY ADDRES
  //      DECLARE PINTER TO THAT M.A
  //      PRINT THE M.A THAT POINT THE POINTER
  //      PRINT THE VALUE OF THE POINTER
  //      CHANGE THE VALUE OF NUM VIA POINTER

  int num = 3;
  int* pNum = nullptr;

  pNum = &num;

  printf("%d\n", num);
  printf("%p\n", &num);
  printf("%p\n", &pNum);
  printf("%d\n", *pNum);

  *pNum = 5;

  printf("%d\n", num);
  printf("%d\n", *pNum);

}

void ex2_add(int a_, int b_, int *res_)
{

  *res_ = a_ + b_;

}

void EX9::Exercise9::ex2()
{

  //PROG  ASK 2 VALUES
  //      DECLARE INT RES
  //      DECLARE POINTER TO RES
  //      CREATE A FUNCTION THAT STORES (POINTER TO RES) THE SUM OF VALUES
  //      DISPLAY ON SCREEN THE VALUE OF THE POINTER

  int a, b, res;
  int* resP = &res;
  printf("Give me a number\n");
  scanf_s("%d", &a);
  printf("Give me other number\n");
  scanf_s("%d", &b);

  ex2_add(a, b, resP);

  printf("%d\n", res);

}

void ex3_add(int* array_, int size_)
{

  for (int i = size_ - 1; i >= 0; i--)
  {

    printf("%d\n", *(array_ + i));
    //printf("%d\n", array_[i]);  this is the same as the line above


  }

}

void EX9::Exercise9::ex3()
{

  // PROG   ASK 10 NUMBERS
  //        STORE THOSE 10 NUMS IN ARRAY [10], USING DINAMYC MEMORY
  //        CREATE FUNCTION INVERSE(INT* ARRAY, INT ARRAYSIZE) THAT  DISPLAYS ON SCREEN THE ARRAY INVERSE ORDER, DO NOT USE []

  int* numArray = new int[10];

  for (int i = 0; i < 10; i++)
  {

    printf("Give me a number:\n");
    scanf_s("%d", &numArray[i], sizeof(numArray[i]));

  }

  ex3_add(numArray, 10);

  delete[] numArray;

}
