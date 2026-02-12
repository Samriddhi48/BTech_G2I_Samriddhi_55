#include<stdio.h>
int main()
{
    int y;
    printf("The year is");
    scanf("%d", &y);
    if(y%4==0 && y%100!=0)
    {
        printf("the year is a leap year");
    }
    else if(y%100==0 && y%400==0)
    {
        printf("the year is a leap year");
    }
    else
    {
        printf("the year is not a leap year");
    }
    return 0;
}