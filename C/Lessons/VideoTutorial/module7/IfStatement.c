/* If Statements */
#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) {
    int result;
    if(num1 >= num2 && num1 >= num3) {
        result == num1;
    }

    else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    }

    else {
        result = num3;
    }
}

int main () {
    printf("%d", max(4, 40, 10));

    if(3 < 2 || 2 > 5) {
        printf("True");
    }

    else {
        printf("False");
    }

    if (3 != 2) {
        printf("True");
    }

    else {
        printf ("False");
    }

    if(!(3 > 2)) { /* Negation */
        printf ("True");
    }

    else {
        printf ("False");
    }

    return 0;
}