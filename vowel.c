#include <stdio.h>

int main(void)
{
	int number;
	printf("\nEnter any number :\n");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("\nEven");
	}
	if(number%2 !=0)
	{
		printf("\nOdd");
	}

}
