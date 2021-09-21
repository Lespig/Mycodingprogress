/* While Loops */
#include <stdio.h>
#include <stdlib.h>

int main () {

    int index1 = 1;
    int index2 = 6;
    while(index1 <= 5) {
        printf("%d\n", index1);
        index1++; /* Same as "index1 = index1 + 1" */
    }

    do {
        printf("%d\n", index2);
        index2++;
    } while(index2 <= 5);

    return 0;
}