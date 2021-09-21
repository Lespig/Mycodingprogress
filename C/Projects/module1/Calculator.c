#include <stdio.h>

int main() {
    double input1;
    double input2;
    int operation;

    printf("Simple Calculator\n");
    printf("Please enter your first input: ");
    scanf("%lf", &input1);
    printf("Please enter your second input: ");
    scanf("%lf", &input2);
    printf("Would you like to 1. Add, 2. Subtract, 3. Multiply, or 4. Divide? ");
    scanf("%d", &operation);
    if (operation == 1) {
        printf("%f", input1 + input2);
        printf("\n");
    }

    else if (operation == 2) {
        printf("%f", input1 - input2);
        printf("\n");
    }

    else if (operation == 3) {
        printf("%f", input1 * input2);
        printf("\n");
    }

    else if (operation == 4) {
        printf("%f", input1 / input2);
        printf("\n");
    }

    else {
        printf("Please try again\n");
    }

    return 0;
}