#include<stdio.h>
int main()
{
	int A;
	
	printf("enter any number:\n");
	scanf("%i",&A);
	
	(A % 2 == 0) ? (printf("%i is Even number",A)) : (printf("%i id Odd number",A));
	
	return 0;
}