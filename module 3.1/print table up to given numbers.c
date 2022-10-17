#include<stdio.h>
int main()
{
	int a1,a2,i;
	
	printf("Enter any number for table\n");
	scanf("%i",&a1);
	
	printf("Enter any number for end table\n");
	scanf("%i",&a2);
	
	for(i=1;i<=a2;i++)
	{
		printf("%i X %i=%i\n",a1,i,a1 * i);
		
	}
	return 0;
}