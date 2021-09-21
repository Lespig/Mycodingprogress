#include <stdio.h>

int main() {
    int input1;
    int input2;
    int result;

    printf("Enter first number to add: ");
    scanf("%d", &input1);
    printf("Enter second number to add: ");
    scanf("%d", &input2);

    result = input1 + input2;
    printf("\nResult: %d", result);
    printf("\n");

    return 0;
}