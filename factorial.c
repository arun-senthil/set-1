#include <stdio.h>

int main() {
	//code
	int num,factorial=1,i;
	printf("enter the number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	    factorial=factorial*i;
	}
	printf("factorial of number %d is : %d",num,factorial);
	return 0;
}
