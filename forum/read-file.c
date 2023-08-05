#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100

typedef struct
{
  int id;
  char name[50];
  double amount;
} Data;

int main()
{
  FILE *file;
  char line[MAX_LINE_LENGTH];
  Data data;

  // Membuka file dalam mode membaca (read)
  file = fopen("data.txt", "r");

  // Validasi file
  if (file == NULL)
  {
    printf("Gagal membuka file.\n");
    return 1;
  }

  // Membaca dan menampilkan data dari file
  while (fgets(line, sizeof(line), file))
  {
    sscanf(line, "%d %[^0-9] %lf", &data.id, data.name, &data.amount);

    printf("ID: %d\n", data.id);
    printf("Nama: %s\n", data.name);
    printf("Jumlah: %.2f\n", data.amount);
    printf("----------------------\n");
  }

  fclose(file);

  return 0;
}
