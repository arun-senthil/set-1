#include <stdio.h>

int main() {
	//code
	int Num[2];
	int i,sum=0;
	printf("Enter any 3 numbers");
	for(i=0;i<=2;i++)
	{
	    scanf("%d",&Num[i]);
	}
	for(i=0;i<=2;i++)
	{
	  sum += Num[i];  
	}
	printf("\n%d",sum);
	return 0;
}
