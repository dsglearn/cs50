#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scoresCount = get_int("Enter scores count: \n");
    int scores[scoresCount];


    for (int i = 0; i < scoresCount; i++)
    {
        scores[i] = get_int("Score %i = ", i);
    }

    printf("Average %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}