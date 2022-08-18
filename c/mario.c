#include <stdio.h>
#include <cs50.h>

int main()
{
    int size;

    while (true)
    {
        size = get_int("Size: ");
        if (size > 0)
        {
            break;
        }
    }

    for (int i = 0; i < size; i++) // For each row
    {
        for (int j = 0; j < size; j++) // For each column
        {
            printf(".");
        }
        printf("\n");
    }
    printf("\n");
}