#include <stdio.h>
#include <cs50.h>

int main(void) {
    char c = get_char("Are you agree? y/n\n");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agred!\n");
    }
    else
    {
        printf("Fuck you!\n");
    }
}