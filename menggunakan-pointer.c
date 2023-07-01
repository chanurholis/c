#include <stdio.h>

void passByValue(int a, int b);

void passByAddress(int *a, int *b);

int main(void)
{
  int a = 55;
  int b = 77;

  printf("Default\na = %d\nb = %d\n", a, b);

  passByValue(a, b);
  
  printf("\nPass By Value\na = %d\nb = %d\n", a, b);

  passByAddress(&a, &b);

  printf("\nPass By Address\na = %d\nb = %d\n", a, b);

  return 0;
}

void passByValue(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void passByAddress(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}