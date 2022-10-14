#include<stdio.h>
int main()
{
	int a1,a2;
	
	printf("Enter number for find factors\n");
	scanf("%i",&a1);
	
	for(a2=1;a2<=a1;a2++)
	{
		if(a1%a2==0)
		{
			printf("%i ",a2);
		}
	}
	
	
	return 0;
}