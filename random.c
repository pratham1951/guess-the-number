#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{ 
    int num;
    srand(time(0));
    num=rand()%100+1;
    printf("the Random number is %d \n",num);

    return 0;
}