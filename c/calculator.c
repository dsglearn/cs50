#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    float z = (float) x / (float) y;

    printf("%.50f\n", z);

}