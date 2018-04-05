#include <stdio.h>

int main() {
	//code
	//int n,
	int a[4];
	//printf("Enter the number of elements: ");
	//scanf("%d",&a[n]);
	int i,j,l;
	for(i=0;i<=4;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	    for(j=i+1;j<=4;j++)
	    {
	        if (a[i]<a[j])
	        {
	            a[j]=l;
	        }
	    }
	 
	}
		printf("\n%d is largest element in the array",l);
	
	return 0;
}
