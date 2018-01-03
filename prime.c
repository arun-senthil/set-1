#include <stdio.h>

int main() {
	//code
	int n,a=0,i;
	printf("enter the number to check : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
	        a++;
	    }
	}
	if(a==2)
	{
	    printf("\n%d is a prime number",n);
	}
	else
	{
	    printf("\n%d is not a prime number",n);
	}
	return 0;
}
