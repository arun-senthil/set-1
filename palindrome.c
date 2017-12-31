#include <stdio.h>

int main() {
	//code
	int num,orginalnum,reverse;
	printf("enter the number to check : ");
	scanf("%d",&num);
	while(num!=0)
	{
	    reverse=reverse*10+num%10;
	    num /=10;
	}
	if(num=reverse)
	{
	    printf("\nthe number is a palindrome");
	    
	}
	else 
	{
	    printf("\nits not a palindrome");
	}
	return 0;
}
