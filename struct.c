#include <stdio.h>
#include <string.h>

struct Person
{
  char name[50];
  int age;
  float height;
};

int main()
{
  struct Person person1;
  struct Person person2;

  strcpy(person1.name, "John");
  person1.age = 30;
  person1.height = 1.75;

  strcpy(person2.name, "Doe");
  person2.age = 28;
  person2.height = 1.80;

  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Height: %f\n", person1.height);

  printf("\n");

  printf("Name: %s\n", person2.name);
  printf("Age: %d\n", person2.age);
  printf("Height: %f\n", person2.height);

  return 0;
}