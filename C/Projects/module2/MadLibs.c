#include <stdio.h>
#include <stdlib.h>

int main () {
    char adjective1[20];
    char noun1[20];
    char name1[20];
    char adjective2[20];
    char clothes1[20];
    char noun2[20];
    char city1[20];
    char nouns1[20];
    char adjective3[20];
    char body1[20];
    char letter[20];
    char celeb1[20];
    char nouns3[20];
    char adjective4[20];
    char place1[20];
    char body2[20];
    char adjective5[20];
    char adjective6[20];
    char verb1[20];
    char nouns4[20];
    char number[20];

    printf("There are many ____ (adj) ");
    scanf("%s", adjective1);
    printf("ways to choose a/an ____ (noun) ");
    scanf("%s", noun1);
    printf("to read. First, you could ask for recommendations from your friends and family. ");
    printf("Just don't ask Aunt ____ (name) ");
    scanf("%s", name1);
    printf("- she only reads ____ (adj) ");
    scanf("%s", adjective2);
    printf("books with ____ (article of clothing) ");
    scanf("%s", clothes1);
    printf("-ripping goddesses on the cover. If your friends and family are no help, try checking out the ____ (noun) ");
    scanf("%s", noun2);
    printf("Review in The ____ (a city) ");
    printf("%s", city1); /*No spaces! */
    printf("Times. If the ____ (plural noun) ");
    scanf("%s", nouns1);
    printf("featured there are too ____ (adj) ");
    scanf("%s", adjective3);
    printf("for your taste, try something a little more low- ____ (body part) ");
    scanf("%s", body1);
    printf("like ____ (letter) ");
    scanf("%s", letter);
    printf(": The ____ (celebrity) ");
    scanf("%s", celeb1); /*No spaces! */
    printf(", or ____ (plural noun) ");
    scanf("%s", nouns3);
    printf("Magazine. You could also choose a book the ____ (adj) ");
    scanf("%s", adjective4);
    printf("-fashioned way. Head to your local library or ____ (place) ");
    scanf("%s", place1);
    printf("and browse the shelves until something catches your ____ (body part) ");
    scanf("%s", body2);
    printf(". Or, you could save yourself a whole lot of ____ (adj) ");
    scanf("%s", adjective5);
    printf("trouble and log on to www.bookish.com, the ____ (adj) ");
    scanf("%s", adjective6);
    printf("new website to ____ (verb) ");
    scanf("%s", verb1);
    printf("for books! With all the time you'll save not having to search for ____ (plural noun) ");
    scanf("%s", nouns4);
    printf(", you can read ____ (number) more books!");
    scanf("%s", number);
    printf("There are many %s ways to choose a/an %s to read.", adjective1, noun1);
    printf("First, you could ask for recommendations from your friends and family.");
    printf("Just don't ask Aunt %s - she only reads %s books with %s - ripping goddesses on the cover.", name1, adjective2, clothes1);
    printf("If your friends and family are no help, try checking out the %s Review in The %s Times.", noun2, city1);
    printf("If the %s featured there are too %s for your taste, try something a little more low - %s like %s : The %s, or %s Magazine.", nouns1, adjective3, body1, letter, celeb1, nouns3);
    printf("You could also choose a book the %s - fashioned way. Head to your local library or %s and browse the shelves until something catches your %s.", adjective4, place1, body2);
    printf("Or, you could save yourself a whole lot of %s trouble and log on to www.bookish.com, the %s new website to %s for books!", adjective5, adjective6, verb1);
    printf("With all the time you'll save not having to search for %s, you can read %s more books!", nouns4, number);

    return 0;
}