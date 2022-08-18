#include <stdio.h>
#include <cs50.h>

int get_negative_int(void);


int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

int get_negative_int(void)
{
    int num = 0;
    do
    {
        num = get_int("Enter number: ");
    }
    while (num < 0);


    return num * -1;
}