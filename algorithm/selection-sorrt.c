#include <stdio.h>

void selectionSort(int arr[], int n)
{
  int i, j, min_idx, temp;
  for (i = 0; i < n - 1; i++)
  {
    min_idx = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }
    // Swap the elements
    temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
  }
}

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Unsorted array: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  selectionSort(arr, n);

  printf("\nSorted array: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}
