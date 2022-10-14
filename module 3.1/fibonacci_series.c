#include<stdio.h>
int main()
{
	int a1=0,a2=1,a3;
	int num;
	
	printf("Enter any number for series\n");
	
	scanf("%i",&num);
	
	printf("%i%i",a1,a2);
	
	while(a3<num)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		
		printf("%i",a3);
	}
	
	
	return 0;
}