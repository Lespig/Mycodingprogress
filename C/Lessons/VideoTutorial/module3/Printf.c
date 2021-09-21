/* Printf, Working With Numbers, Comments, and Constants */
#include <stdio.h>
#include <stdlib.h>

int main () {
    const int NUM = 5;
    printf("%d", NUM);
    printf("\n");
    /* num = 8; will throw an error because constants can't be changed*/
    printf("%d", NUM);
    printf("\n");
    printf("Hello");
    printf("\n");
    printf("%d", 70);
    printf("\n");

    return 0;
}