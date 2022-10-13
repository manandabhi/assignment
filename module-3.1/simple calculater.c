#include<stdio.h>
int main()
{
	int a1,a2;
	
	
	printf("Enter any two int numbers\n");
	scanf("%i %i",&a1,&a2);
	
	printf("%i+%i=%i\n",a1,a2,a1+a2);
	printf("%i-%i=%i\n",a1,a2,a1-a2);
	printf("%i*%i=%i\n",a1,a2,a1*a2);
	printf("%imod%i=%i\n",a1,a2,a1%a2);
	printf("%i/%i=%i",a1,a2,a1/a2);
	
	return 0;
}