#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    } else if (argc < 2)
    {
        printf("Enter more arguments\n");
    } else printf("Too much arguments\n");
}