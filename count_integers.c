#include<stdio.h>
int main()
{
int n,a;
printf("enter the integer the number : ");
scanf("%d",&n);
while(n !=0)
{
	n/=10;
	++a;
}
printf("\nnumber of digits in the number is : %d",a);
}
