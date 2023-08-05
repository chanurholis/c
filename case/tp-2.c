#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int main()
{
  int inputJumlahArray;

  printf("Input jumlah elemen Array: ");
  scanf("%d", &inputJumlahArray);
  getchar();

  if (inputJumlahArray <= 0)
  {
    printf("\nJumlah elemen harus lebih dari 0.\n");
    return 1;
  }

  int *arr = (int *)malloc(inputJumlahArray * sizeof(int));

  printf("Input %d angka (dipisah dengan enter):\n", inputJumlahArray);
  for (int i = 0; i < inputJumlahArray; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nInput angka yang ingin dicari: ");
  int angkaCari;
  scanf("%d", &angkaCari);

  int index = -1;
  int low = 0;
  int high = inputJumlahArray - 1;

  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (arr[mid] == angkaCari)
    {
      index = mid;
      break;
    }
    else if (arr[mid] < angkaCari)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  if (index != -1)
  {
    printf("Angka ditemukan pada index ke - %d\n", index);
  }
  else
  {
    printf("Angka tidak ditemukan\n");
  }

  qsort(arr, inputJumlahArray, sizeof(int), compare);

  printf("Urutan angka yang diinputkan: ");
  for (int i = 0; i < inputJumlahArray; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  free(arr);
  return 0;
}
