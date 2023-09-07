#include <stdio.h>
#include <string.h>

void swapStrings(char **first, char **second);

void selectionSort(char *names[], size_t n);

int main()
{
  char *names[] = {"Fahmi", "Icha", "Agus", "Zelda", "Felix", "Deddy", "Hassan", "Makmun", "Bella", "Chelshe"};
  size_t total_names = sizeof(names) / sizeof(names[0]);

  printf("\nDaftar nama sebelum sorting:\n");
  for (size_t i = 0; i < total_names; i++)
  {
    printf("%s ", names[i]);
  }
  printf("\n");

  selectionSort(names, total_names);

  printf("\nDaftar nama setelah sorting:\n");
  for (size_t i = 0; i < total_names; i++)
  {
    printf("%s ", names[i]);
  }
  printf("\n");

  return 0;
}

void swapStrings(char **first, char **second)
{
  char *temp = *first;
  *first = *second;
  *second = temp;
}

void selectionSort(char *names[], size_t total_names)
{
  for (size_t i = 0; i < total_names - 1; i++)
  {
    size_t min_idx = i;

    for (size_t j = i + 1; j < total_names; j++)
    {
      if (strcmp(names[j], names[min_idx]) < 0)
      {
        min_idx = j;
      }
    }

    if (min_idx != i)
    {
      swapStrings(&names[i], &names[min_idx]);
    }
  }
}
