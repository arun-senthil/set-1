#include <stdio.h>

int main() {
	//code
	int n,a,b,i;
	printf("enter the intevals : ");
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++)
	{
	    if(i%2==0)
	    {
	        printf("%d ",i);
	    }
	}
	return 0;
}
