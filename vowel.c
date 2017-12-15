#include <stdio.h>

int main(void)
{
	char c;
	printf("enter any character :\n");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("\nvowel");
		
	}
	else
	{
		printf("\nconsonant");
	}
	
}
