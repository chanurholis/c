#include <stdio.h>

int main()
{
  int inputBilanganSatu, inputBilanganDua, n;

  printf("Masukkan Angka Ke-1 = ");
  scanf("%d", &inputBilanganSatu);

  printf("Masukkan Angka Ke-2 = ");
  scanf("%d", &inputBilanganDua);

  printf("Banyak angka yang ditampilkan = ");
  scanf("%d", &n);

  // tidak boleh kurang dari 2, karena default input ada dua angka
  if (n == 0 || n < 2)
  {
    printf("Banyak angka yang ditampilkan tidak boleh 0 atau kurang dari 2!");
    return 0;
  }

  // NOTE: masukkan input bilangan satu & dua ke dalam array
  // NOTE: pastikan inputBilanganSatu pada index pertama & inputBilanganDua index ke 2
  int result[] = {inputBilanganSatu, inputBilanganDua};
  
  for (int i = 0; i < n; i++)
  {
    // NOTE: skip untuk iterasi pertamma dan kedua
    if (i == 0 || i == 1) 
    {
      continue;
    }

    printf("%d ", i);

    // NOTE: masukkan untuk index berikutnya hasil dari index pertama & kedua
    // NOTE: dan terus seperti itu sebanyak iterasi yang ditentukan
    // result[i] = result[i - 2] + result[i - 1];
  }

  // for (int i = 0; i < sizeof(result); i++)
  // {
  //   printf("%d", result[i]);
  // }
  

  return 0;
}