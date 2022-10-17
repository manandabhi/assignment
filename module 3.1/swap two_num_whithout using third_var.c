#include<stdio.h>
int main()
{
	int a1,a2;
	printf("Enter any two number:\n");
	scanf("%i %i",&a1,&a2);
	printf("a=%i\nb=%i\n",a1,a2);
	
	a1=a1+a2;
	a2=a1-a2;
	a1=a1-a2;
	
	printf("\nSwap value is\n \na1=%i \na2=%i",a1,a2);
	return 0;
}