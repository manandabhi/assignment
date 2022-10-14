#include<stdio.h>
int main()
{
	int a1,rem,res;
	
	printf("Enter any int number\n");
	scanf("%i",&a1);
	
	while(a1!=0)
	{
		rem=a1%10;
		res=res*10+rem;
		a1=a1/10;
	}
	
	printf("%i",res);
	
	
	
	
	return 0;
}