#include <stdio.h>

int main()
{
	//code
	char q;
	printf("enter the character : ");
	scanf("%c",&q);
	if(q>='a'&&q<='z' || q>='A'&& q<='Z')
	{
	    printf("\nthe entered character is an alphabet");
	}
	else 
	{
	    printf("\nit's not an alphabet");
	}
	return 0;
}
