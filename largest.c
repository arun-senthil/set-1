#include<stdio.h>
void main()
{
    int a,b,c,largest_num;
    printf("enter the three numbers to decide : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(b>a)
    {
        largest_num =b;
        
    }
    if (c>b)
    {
        largest_num = c;
    }
    printf("the largest of three numbers is : %d",largest_num);
}
