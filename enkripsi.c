#include <stdio.h>

int main()
{
  char ex[] = "Bina Nusantara";

  // hitung jumlah string (berapa kali iterasi)
  int s = sizeof(ex);
  char res[s];

  for (int i = 0; i < s; i++)
  {
    char huruf = ex[i];

    printf("%c", huruf);

    if (huruf == ' ')
    {
      res[i] = huruf;
    }

    else if (huruf == 'a')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'i')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'u')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'e')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'o')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'A')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'I')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'U')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'E')
    {
      res[i] = huruf + 1;
    }

    else if (huruf == 'O')
    {
      res[i] = huruf + 1;
    }

    else
    {
      res[i] = huruf + 2;
    }
  }

  printf("\n");

  for (int i = 0; i < s; i++)
  {
    printf("%c", res[i]);
  }

  return 0;
}