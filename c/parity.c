#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = get_int("Enter number n: \n");

    if (n % 2 == 0)
    {
        printf("n is even");
    }
    else
    {
        printf("n is odd");
    }
}