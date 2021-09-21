/* Functions and Return Statement */
#include <stdio.h>
#include <stdlib.h>

double cube (double num) { /* To call this function if it's below "main", use "double cube (double num);" here */
    double result = num * num * num;
    return result;
}

int main () {
    printf("Oh, ");
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);
    printf("It's nice to meet you!\n");

    printf("Answer: %f", cube(3.0));
    printf("\n");
    printf("Answer: %f", cube(7.0));
    printf("\n");

    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d years old\n", name, age);
}
