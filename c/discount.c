#include <stdio.h>
#include <cs50.h>

float discount(float price, float percent_off);

int main(void)
{
    float regular = get_float("Regular Price: ");
    float percent_off = get_float("Enter percent: ");
    float sale = discount(regular, percent_off);
    printf("New price: %.2f\n", sale);
}


float discount(float price, float percent_off)
{
    float discount_sum = (price / 100) * percent_off;
    return price - discount_sum;
}