#include <stdio.h>
#include <stdlib.h>

// #define SWAP(a, b) int t; t = a, a = b, b = t;

// Pass by value
// void swapByValue(int a, int b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// Pass by address/pointer
// void swapByAddress(int *a, int *b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

int main(void)
{
   int *arr = calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++) {
        *(arr + i) = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }

    free(arr); // Jangan lupa untuk membebaskan memori yang dialokasikan

    return 0;

  // enum status {pass, fail, absent};
  // enum status studi1, studi2, studi3;
  // studi1 = pass;
  // studi2 = fail;
  // studi3 = absent;
  // printf("%d %d %d", studi1, studi2, studi3);

  // int a = 10, b = 12;

  // SWAP(a, b);

  // printf("a = %d, b = %d ", a, b);

  // int number1 = 2;
  // int number2 = 5;

  // swapByValue(number1, number2);

  // printf("--PassByValue-- \nnumber 1= %d , number 2 = %d\n\n", number1, number2);

  // swapByAddress(&number1, &number2);

  // printf("--PassByAddress-- \nnumber 1= %d , number 2 = %d\n", number1, number2);

  return 0;
}