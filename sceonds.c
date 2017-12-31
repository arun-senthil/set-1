#include <stdio.h>

int main() {
	//code
	int min,mins,seconds;
	printf("Enter the time in minutes :");
	scanf("%d",&min);
	if(min<=60)
	{
	    mins=min;
	    seconds=0;
	}
	else{
	    mins=60;
	    seconds=min%60;
	    
	}
	printf("\nminutes : %d\nseconds : %d",mins,seconds);
	
	return 0;
}
