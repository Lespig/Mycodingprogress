/* Reading and Writing Files */
#include <stdio.h>
#include <stdlib.h>

int main () {

    FILE * fpointer1 = fopen("employees.txt", "a");
    /*
    r = read file
    w = write file (overrides existing data)
    a = append file
    */

    // To rerun this program, delete "Kelly, Customer Service" from text file first"
    fprintf(fpointer1, "\nKelly, Customer Service");

    fclose(fpointer1);

    char line[255];
    FILE * fpointer2 = fopen("employees.txt", "r");

    fgets(line, 255, fpointer2);
    printf("%s", line);

    fclose(fpointer2);
    return 0;
}