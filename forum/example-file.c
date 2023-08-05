#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100;

int main()
{
  FILE *file;

  file = fopen("data.txt", "o");

  if (file == NULL) {
    printf("File cannot be opened...");
  }

  return 0;
}
