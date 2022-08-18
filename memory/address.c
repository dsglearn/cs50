#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {1, 3, 6, 4, 5};

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));

    printf("%i\n", *(numbers + 101));
}

