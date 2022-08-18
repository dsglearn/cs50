#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string secret_key = argv[1];
    char plaintext[150] = "hello, world";
    char *ciphertext = plaintext;

    for (int i = 0; i < strlen(plaintext); i++)
    {

        if ((plaintext[i] >= 'A' && plaintext[i] <= 'Z') || (plaintext[i] >= 'a' && plaintext[i] <= 'z'))
        {
            int secret_key_int = atoi(secret_key); // в инт перевел верно все робит
            ciphertext[i] += secret_key_int;

        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }

printf("%s\n", ciphertext);


}