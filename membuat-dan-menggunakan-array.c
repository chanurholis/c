#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_LENGTH 100
#define MAX_NUM_STRINGS 5

void clearScreen();

int main()
{
  // clearScreen();

  int jumlah_mata_kuliah;
  int max_num_mata_kuliah;

  printf("Masukkan jumlah mata kuliah yang telah diambil : ");
  scanf("%d", &jumlah_mata_kuliah);

  if (jumlah_mata_kuliah == 0)
  {
    printf("\nJumlah mata kuliah tidak boleh 0 (Kosong)");

    return 0;
  }

  max_num_mata_kuliah = jumlah_mata_kuliah - 1;

  // Declare the array of strings
  char strings[MAX_NUM_STRINGS][MAX_STR_LENGTH];

  // Input strings into the array
  printf("Enter %d strings:\n", MAX_NUM_STRINGS);
  for (int i = 0; i < MAX_NUM_STRINGS; i++)
  {
    printf("String %d: ", i + 1);
    fgets(strings[i], MAX_STR_LENGTH, stdin);

    // Remove the trailing newline character
    strings[i][strcspn(strings[i], "\n")] = '\0';
  }

  // Display the strings
  printf("\nEntered strings:\n");
  for (int i = 0; i < MAX_NUM_STRINGS; i++)
  {
    printf("String %d: %s\n", i + 1, strings[i]);
  }

  return 0;
}

void clearScreen()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}