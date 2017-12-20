#include<stdio.h>
void main()
{
    int year;
    printf("enter the year of your birth : ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("\nthe year you're borned is a leap year");
    }
    else 
    {
        printf("\nits not a leap year");
    }
}
