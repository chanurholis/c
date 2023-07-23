#include <stdio.h>
#include <string.h>

typedef struct student
{
    char ID[12];
    char name[20];
    char prodi[20];
} STUDENT;

void printData(STUDENT *mhs)
{
    // Print all the data
    printf("ID: %s\n", mhs->ID);
    printf("Name: %s\n", mhs->name);
    printf("Prodi: %s\n", mhs->prodi);
}

int main()
{
    STUDENT student;
    strcpy(student.ID, "121314");
    strcpy(student.name, "Keysha My Heroine");
    strcpy(student.prodi, "SI");

    // Print data
    printData(&student);

    return 0;
}