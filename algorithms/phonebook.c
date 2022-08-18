#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{

    person people[2];
    people[0].name = "Dima";
    people[0].number = "331540";

    people

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "David") == 0)
        {
            printf("Found %s\n", names[i]);
        }
        else
        {
            printf("%s not David\n", names[i]);
        }
    }
}