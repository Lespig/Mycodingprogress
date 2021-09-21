/* For Loops */
#include <stdio.h>
#include <stdlib.h>

int main () {

    int i1 = 1;
    while (i1 <= 5) {
        printf("%d\n", i1);
        i1++;
    }

    int i2;
    for(i2 = 1; i2 <= 5; i2++) {
        printf("%d\n", i2);
    }

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int i3;
    for(i3 = 1; i3 < 6; i3++) {
        printf("%d\n", luckyNumbers[i3]);
    }

    return 0;
}