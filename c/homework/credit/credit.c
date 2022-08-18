#include <cs50.h>
#include <stdio.h>
#include <string.h>




int main(void)
{
    string card_number = "4003600000000014";

    int card_length = strlen(card_number);
    int multiplied_card_numbers[16];
    int not_multiplied_card_numbers[16];
    char array_to_str_converted[16] = "";


    for(int i = card_length - 2; i >= 0; i = i - 2)
    {
        multiplied_card_numbers[i] = (card_number[i] - 48) * 2;
    }
    char temp[16] = "";
    for (int i = 0; i < 15; i++)
    {
        if (multiplied_card_numbers[i] != 0)
        {
            sprintf(temp, "%d", multiplied_card_numbers[i]);
            strcat(array_to_str_converted, temp);
        }
    }


int length_of_str_converted = strlen(array_to_str_converted);

int sum = 0;
for (int i = 0; i < length_of_str_converted; i++)
{
    sum += array_to_str_converted[i] - 48;
}

int sum2 = 0;
for(int i = card_length - 1; i >= 0; i = i - 2)
{
    not_multiplied_card_numbers[i] = (card_number[i] - 48);
    sum2 += not_multiplied_card_numbers[i];
    // printf("%d\n", not_multiplied_card_numbers[i]);
}

int final_sum = sum + sum2;

if (final_sum % 10 == 0)
{
    printf("VALID CARD SIN SUKI\n");
} else
{
    printf("NE VALID BLYAD\n");
}



}