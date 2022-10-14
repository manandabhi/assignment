#include<stdio.h>
int getSum(int a1)
{
	
	if(a1>0)
	{
		
		return a1+getSum(a1-1);
	}
	
return 0;
}int main()
{
	int a2;
	printf("Enter number for sum\n");
    scanf("%i",&a2);
	printf("%i",getSum(a2));
	
	return 0;
}