include <stdio.h>
int  main()
{
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	if(num<0)
	{
		printf("\nnegative");
	} 
	
	if(num==0)
	{
		printf("\nEqual");
		
	}
	if(num> 0)
	{
		printf("\npositive");
	}
}
