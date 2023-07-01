#include <stdio.h>
#include <string.h>

#define MAX_STR_LENGTH 100
#define MAX_NUM_STRINGS 5

int main()
{
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
