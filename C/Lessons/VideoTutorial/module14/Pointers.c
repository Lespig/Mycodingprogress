/* Pointers and Dereferencing Pointers */
#include <stdio.h>
#include <stdlib.h>

int main () {

    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age); /* pAge and &age works the same */
    printf("%d", *&age); /* use & to get memory address and * to dereferece */
    return 0;
}