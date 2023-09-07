#include <stdio.h>

struct mhs
{
  char NIM[10];
  char Nama[30];
  float nilai;
};

int main()
{
  struct mhs data_mhs[100];
  int jumlah;

  int hasil = sizeof(data_mhs) + sizeof(jumlah);

  printf("%d", hasil);

  return 0;
}