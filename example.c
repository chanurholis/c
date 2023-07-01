#include <stdio.h>

// Pass by value
void swapByValue(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

// Pass by address/pointer
void swapByAddress(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int number1 = 2;
  int number2 = 5;

  swapByValue(number1, number2);

  printf("--PassByValue-- \nnumber 1= %d , number 2 = %d\n\n", number1, number2);

  swapByAddress(&number1, &number2);

  printf("--PassByAddress-- \nnumber 1= %d , number 2 = %d\n", number1, number2);

  return 0;
}