/* Getting User Input */
#include <stdio.h>
#include <stdlib.h>

int main () {

    int age;
    double gpa;
    char grade;
    char name[20];

    printf("What's your name?\n");
    fgets(name, 20, stdin);
    printf("Hello! Your name is %s", name);
    printf("\n");

    printf("How old are you?\n");
    scanf("%d", &age); /* & is a pointer */
    printf("You are %d years old\n", age);

    printf("Enter your GPA: \n");
    scanf("%lf", &gpa); /* Use %lf to input a double */
    printf("Your GPA is %f", gpa);
    printf("\n");

    printf("Enter your grade: \n");
    scanf(" %c", &grade);
    printf("Your grade is %c", grade);
    printf("\n");

    return 0;
}