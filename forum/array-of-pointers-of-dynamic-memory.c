#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH_NAMA 100
#define MAX_LENGTH_PRODI 100

typedef struct
{
  int id;
  char nama[MAX_LENGTH_NAMA];
  char prodi[MAX_LENGTH_PRODI];
  float gpa;
} Mahasiswa;

int main()
{
  int inputJumlahMahasiswa;

  printf("Masukkan jumlah mahasiswa yang akan di-inputkan : ");
  scanf("%d", &inputJumlahMahasiswa);
  getchar();

  if (inputJumlahMahasiswa == 0)
  {
    printf("\nJumlah mahasiswa tidak boleh kosong!");
    return 1;
  }

  Mahasiswa **mahasiswas = (Mahasiswa **)malloc(inputJumlahMahasiswa * sizeof(Mahasiswa *));

  for (int i = 0; i < inputJumlahMahasiswa; i++)
  {
    mahasiswas[i] = (Mahasiswa *)malloc(sizeof(Mahasiswa)); // Alokasi memori untuk setiap elemen

    printf("\nMahasiswa ke-%d\n", i + 1);

    printf("NIM : ");
    scanf("%d", &mahasiswas[i]->id);

    getchar(); // Membersihkan karakter newline (\n) dari buffer

    printf("Nama: ");
    fgets(mahasiswas[i]->nama, MAX_LENGTH_NAMA, stdin);
    mahasiswas[i]->nama[strcspn(mahasiswas[i]->nama, "\n")] = '\0';

    printf("Prodi: ");
    fgets(mahasiswas[i]->prodi, MAX_LENGTH_PRODI, stdin);
    mahasiswas[i]->prodi[strcspn(mahasiswas[i]->prodi, "\n")] = '\0';

    printf("GPA: ");
    scanf("%f", &mahasiswas[i]->gpa);

    getchar(); // Membersihkan karakter newline (\n) dari buffer
  }

  printf("\nBerikut adalah daftar mahasiswa yang sudah diinputkan : \n");

  // Setelah data diinputkan, Anda dapat mengakses data seperti berikut:
  for (int i = 0; i < inputJumlahMahasiswa; i++)
  {
    printf("\nMahasiswa ke-%d\n", i + 1);
    printf("NIM : %d\n", mahasiswas[i]->id);
    printf("Nama: %s\n", mahasiswas[i]->nama);
    printf("Prodi: %s\n", mahasiswas[i]->prodi);
    printf("GPA: %.2f\n", mahasiswas[i]->gpa);
  }

  // Jangan lupa untuk membebaskan memori setelah selesai menggunakan mahasiswas
  for (int i = 0; i < inputJumlahMahasiswa; i++)
  {
    free(mahasiswas[i]);
  }
  free(mahasiswas);

  return 0;
}
