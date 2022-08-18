#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string input = get_string("Enter string: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (islower(input[i]))
        {
            input[i] = input[i] - 32;
        }
        printf("%c", input[i]);
    }
    printf("\n");
}