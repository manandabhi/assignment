#include<stdio.h>
int main()
{
	int a1;
	
	printf("Enter any year\n");
	scanf("%i",&a1);
	
	if(a1%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not a leap year");
	}
	
	
	return 0;
}