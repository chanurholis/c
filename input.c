#include <stdio.h>

int main() {
    char name[50];
    // int age;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // printf("Enter your age: ");
    // scanf("%d", &age);
    
    printf("Hello, %s! Nice to meet you.\n", name);
    // printf("Your age is %d", age);

    return 0;
}
