/* 2D Arrays and Nested Loops */
#include <stdio.h>
#include <stdlib.h>

int main () {

    int nums[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    /*
       0   1
    0 '1' '2'
    1 '3' '4'
    2 '5' '6'
    */

    printf("%d\n", nums[0][0]);
    printf("%d\n", nums[1][1]);

    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}