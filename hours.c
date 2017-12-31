#include <stdio.h>

int main() {
	//code
	int min,mins,hours;
	printf("Enter the time in minutes :");
	scanf("%d",&min);
	if(min<60)
	{
	    mins=min;
	    hours=0;
	}
	else{
	    mins=min%60;
	    hours=min / 60;
	    
	}
	printf("\nhour(s) : %d\nminutes : %d",hours,mins);
	
	return 0;
}
