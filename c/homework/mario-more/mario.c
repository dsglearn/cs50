#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    while (true)
    {
        height = get_int("Height: ");

        if (height > 0)
        {
            break;
        }
    }


    for (int i = 0; i < height; i++)
    {
        for (int j = height; j >= i; j--)
        {
            printf(" ");
        }

        for (int n = 0; n <= i; n++)
        {
            printf("#");
        }
        printf(" ");

        for (int n = 0; n <= i; n++)
        {
            printf("#");
        }

        for (int j = height; j >= i; j--)
        {
            printf(" ");
        }

        printf("\n");
    }
}