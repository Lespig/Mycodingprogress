/* Arrays */
#include <stdio.h>
#include <stdlib.h>

int main () {

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int calledNumbers [10];
    calledNumbers[1] = 10;
    luckyNumbers[4] = 24;
    printf("%d", luckyNumbers[0]);
    printf("\n");
    printf("%d", luckyNumbers[2]);
    printf("\n");
    printf("%d", luckyNumbers[4]);
    printf("\n");
    printf("%d", calledNumbers[1]);
    printf("\n");

    return 0;
}