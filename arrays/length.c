#include <cs50.h>
#include <stdio.h>

int string_len(string input);


int main(void)
{
    string name = get_string("Name: ");
    int length = string_len(name);
    printf("%i\n", length);
}

int string_len(string input)
{
    int i = 0;
    while (input[i] != 0)
    {
        i++;
    }

    return i;
}