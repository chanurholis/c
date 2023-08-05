#include <stdio.h>

double calculateCommission(double totalAmount)
{
  // Menghitung komisi (10% dari totalAmount)
  return 0.1 * totalAmount;
}

void exchangeMoney(double totalAmount, int denomination)
{
  int numNotes = totalAmount / denomination;            // Menghitung jumlah lembaran uang
  double commission = calculateCommission(totalAmount); // Menghitung komisi

  // Menampilkan hasil
  printf("Jumlah uang yang diterima pelanggan: %.2f\n", totalAmount - commission);
  printf("Komisi Anda: %.2f\n", commission);
  printf("Jumlah lembaran uang %d: %d\n", denomination, numNotes);
}

int main()
{
  double totalAmount;
  int denomination;

  printf("Masukkan jumlah uang yang ingin ditukarkan: ");
  scanf("%lf", &totalAmount);

  printf("Masukkan pecahan uang yang diinginkan (misalnya: 1000, 500, 100, 50): ");
  scanf("%d", &denomination);

  exchangeMoney(totalAmount, denomination);

  return 0;
}
