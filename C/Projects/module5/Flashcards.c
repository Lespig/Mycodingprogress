#include <stdio.h>
#include <stdlib.h>

int program() {
    int choice;
    int cont;
    char frontcard1[50];
    char backcard1[50];
    char frontcard2[50];
    char backcard2[50];
    char frontcard3[50];
    char backcard3[50];
    char frontcard4[50];
    char backcard4[50];
    char frontcard5[50];
    char backcard5[50];
    char frontcard6[50];
    char backcard6[50];
    char frontcard7[50];
    char backcard7[50];
    char frontcard8[50];
    char backcard8[50];
    char frontcard9[50];
    char backcard9[50];
    char frontcard10[50];
    char backcard10[50];
    printf("What would you like to do?\n");
    printf("(1) Add flashcards, (2) Review Flashcards, (0) Exit\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter front of card input");
        scanf("%c", frontcard1);
        printf("Enter back of card input");
        scanf("%c", backcard1);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard2);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard2);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard3);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard3);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard3);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard3);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard4);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard4);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard5);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard5);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard6);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard6);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard7);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard7);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard8);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard8);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard9);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard9);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        printf("Enter front of card input");
        scanf("%[^\n]%*c", frontcard10);
        printf("Enter back of card input");
        scanf("%[^\n]%*c", backcard10);
        printf("Do you want to make another flashcard?\n");
        printf("1. No 2. Yes\n");
        scanf("%d", &cont);
        if (cont == 1) {
            program();
        }

        else {
            printf("Max number of flashcards is 10");
            program();
        }
    }

    else if (choice == 2) {
        int flip;
        int next;
        printf("%s", frontcard1);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard1);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard2);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard2);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard3);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard3);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard4);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard4);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard5);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard5);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard6);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard6);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard7);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard7);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard8);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard8);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard9);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard9);
        printf("1. Next card 2. Exit");
        scanf("%i", next);
        if (next == 2) {
            program();
        }

        printf("%s", frontcard10);
        printf("1. Flip card 2. Exit");
        scanf("%i", flip);
        if (flip == 2) {
            program();
        }

        printf("%s", backcard10);
        program();
    }

    else if (choice == 0) {
        int exitp;
        printf("All data from flashcards will be erased! Do you wish to exit?");
        printf("1. No 2. Yes");
        scanf("%d", exitp);
        if (exitp == 1) {
            program();
        }
    }
}

int main () {
    printf("Flashcard Maker\n");
    program();
}