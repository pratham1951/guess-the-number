#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, g, nguess=1;
    srand(time(0));
    num = rand() % 100 + 1;
    //printf("the Random number is %d \n", num);
    do
    {
        printf("Guess a number between 1 to 100 \n");
        scanf("%d", &g);
        if (g > num)
        {
            printf("lower number please \n");
        }
        else if (g < num)
        {
            printf("Higher number please \n");
        }
        else
        {
            printf("attempts used: %d for guessing \n",nguess);
        }
nguess++;
    } while (g!=num);

    return 0;
}
