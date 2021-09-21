/* Structs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student { /* To initialize variables with different data types, use "struct" */
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main () {

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Art");

    printf("%s", student1.name);
    printf("\n");
    printf("%f", student1.gpa);
    printf("\n");
    printf("%s", student2.name);
    printf("\n");
    printf("%f", student2.gpa);
    printf("\n");

    return 0;
}