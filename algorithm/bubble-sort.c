#include <stdio.h>

void bubbleSort(int arr[], int n)
{
  int i, j, temp;

  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        printf("%d > %d = %d\n",arr[j], arr[j + 1], arr[j]);

        // before arr[j] = 64 & arr[j + 1] = 34
        // after arr[j] = 34 & arr[j + 1] = 64

        // Swap elements if they are in the wrong order
        // temp = arr[j]; 64
        // arr[j] = arr[j + 1]; 34
        // arr[j + 1] = temp; 64
      }
      else
      {
        printf("%d > %d = %d\n", arr[j], arr[j + 1], arr[j + 1]);
      }
    }

    printf("\n");
  }
}

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  // printf("Original array: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", arr[i]);
  // }

  bubbleSort(arr, n);

  // printf("\nSorted array (Bubble Sort): ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", arr[i]);
  // }

  return 0;
}
