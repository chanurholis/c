#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LENGTH 100

int main()
{
  int maxNumStrings;

  printf("Masukkan jumlah mata kuliah: ");
  scanf("%d", &maxNumStrings);
  getchar();

  char **mata_kuliah = (char **)malloc(maxNumStrings * sizeof(char *));
  char **kode_mata_kuliah = (char **)malloc(maxNumStrings * sizeof(char *));
  char **sks = (char **)malloc(maxNumStrings * sizeof(char *));
  char **grade = (char **)malloc(maxNumStrings * sizeof(char *));

  if (mata_kuliah == NULL || kode_mata_kuliah == NULL || sks == NULL || grade == NULL)
  {
    printf("Memory allocation failed. Exiting...\n");
    return 1;
  }

  printf("\nMasukkan mata kuliah (panjang maksimum: %d):\n", MAX_STR_LENGTH);

  for (int i = 0; i < maxNumStrings; i++)
  {
    mata_kuliah[i] = (char *)malloc(MAX_STR_LENGTH * sizeof(char));
    kode_mata_kuliah[i] = (char *)malloc(MAX_STR_LENGTH * sizeof(char));
    sks[i] = (char *)malloc(MAX_STR_LENGTH * sizeof(char));
    grade[i] = (char *)malloc(MAX_STR_LENGTH * sizeof(char));

    if (mata_kuliah[i] == NULL || kode_mata_kuliah[i] == NULL || sks[i] == NULL || grade[i] == NULL)
    {
      printf("Memory allocation failed. Exiting...\n");
      return 1;
    }

    // TODO: input matkul
    printf("Masukkan mata kuliah %d: ", i + 1);
    fgets(mata_kuliah[i], MAX_STR_LENGTH, stdin);
    mata_kuliah[i][strcspn(mata_kuliah[i], "\n")] = '\0';

    // TODO: input kode matkul
    printf("Masukkan kode mata kuliah %d: ", i + 1);
    fgets(kode_mata_kuliah[i], MAX_STR_LENGTH, stdin);
    kode_mata_kuliah[i][strcspn(kode_mata_kuliah[i], "\n")] = '\0';

    // TODO: input sks
    printf("Masukkan SKS mata kuliah %d: ", i + 1);
    fgets(sks[i], MAX_STR_LENGTH, stdin);
    sks[i][strcspn(sks[i], "\n")] = '\0';

    // TODO: input grade
    printf("Masukkan grade mata kuliah %d: ", i + 1);
    fgets(grade[i], MAX_STR_LENGTH, stdin);
    grade[i][strcspn(grade[i], "\n")] = '\0';

    printf("\n");
  }

  printf("\nNo Kode Matkul SKS Grade\n");
  for (int i = 0; i < maxNumStrings; i++)
  {
    printf("%d %s %s %s %s\n", i + 1, mata_kuliah[i], kode_mata_kuliah[i], sks[i], grade[i]);
  }

  for (int i = 0; i < maxNumStrings; i++)
  {
    free(mata_kuliah[i]);
    free(kode_mata_kuliah[i]);
    free(sks[i]);
    free(grade[i]);
  }

  free(mata_kuliah);
  free(kode_mata_kuliah);
  free(sks);
  free(grade);

  return 0;
}
