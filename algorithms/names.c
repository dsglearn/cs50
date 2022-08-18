#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        // printf("%i\n", strcmp(names[i], "Fred"));
        if (strcmp(names[i], "Percy") == 0)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;

}