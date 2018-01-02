#include <stdio.h>

int main() {
	//code
	int n,i,multiples;
	printf("enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
	    multiples=n*i;
	 printf("%d ",multiples);   
	}
	return 0;
}
