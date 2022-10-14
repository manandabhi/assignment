#include<stdio.h>
int main()
{
	int P,R,T;
	float Simple_interest;
	
	printf("Enter pricipal amount\n");
	scanf("%i",&P);
	
	printf("Enter rate of interest\n");
	scanf("%i",&R);
	
	printf("Enter time period\n");
	scanf("%i",&T);
	
	Simple_interest=0.01*P*R*T;
	
	printf("Simple interest=%.2f",Simple_interest);
	
	
	
	
	
	
	return 0;
}