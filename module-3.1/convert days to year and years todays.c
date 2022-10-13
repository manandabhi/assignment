#include<stdio.h>
int main()
{
	int years,days;
	float Years;
	
	printf("Enter years\n");
	scanf("%i",&years);
	
	days=365*years;
	
	printf("Days=%i",days);
	
	printf("\n\nEnter days\n");
	scanf("%i",&days);
	
	Years=days/365;
	
	printf("Years=%.2f",Years);
	
	
	return 0;
}