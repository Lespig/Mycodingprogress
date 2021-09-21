#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("Usage: missing or invalid command line argument");
        return 1;
    }

    // Check if key only contains alphabet characters
    int n = 0;
    while (key[n] != '\0')
    {
        if ((key[n] >= 'a' && key[n] <= 'z') || (key[n] >= 'A' || key[n] <= 'Z'))
        {
            n++;

        }

        else
        {
            printf("Non-alphabetical character detected");
            return 1;
        }
    }

    printf("%d\n", n);

    char plaintext[100];
    printf("Enter a message to encrypt: \n");
    fgets(plaintext, 100, stdin);
    int textlen = strlen(plaintext);
    int keylen = strlen(key);
    int i = 0;
    int j = 0;
    char newKey[textlen];
    char ciphertext[textlen];
    for (i = 0, j = 0; i < textlen; ++i, ++j)
    {
        if (j == keylen)
        {
            j = 0;
        }

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    for (i = 0; i < textlen; ++i)
    {
        ciphertext[i] = ((plaintext[i] + newKey[i]) % 26) + 'A';
    }

    ciphertext[i] = '\0';

    printf("Original Message: %s", plaintext);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", ciphertext);
    return 0;
}