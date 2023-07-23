#include <stdio.h>

union Data
{
  int integerValue;
  float floatValue;
  char charValue;
};

int main()
{
  union Data data;

  data.integerValue = 10;
  printf("Integer value: %d\n", data.integerValue);

  data.floatValue = 3.14;
  printf("Float value: %f\n", data.floatValue);

  // Perubahan anggota union dapat menyebabkan anggota lain menjadi tidak valid
  data.charValue = 'A';
  printf("Character value: %c\n", data.charValue);

  printf("Integer value after charValue change: %d\n", data.integerValue); // Data salah!

  data.floatValue = 2.90;
  printf("After Change Float value: %f\n", data.floatValue);

  data.charValue = 'A';
  printf("Character value: %c\n", data.charValue);

  return 0;
}
