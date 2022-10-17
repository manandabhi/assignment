#include<stdio.h>

int main()
{
    int n,sum,a1,a2;
    
    printf("Enter any number:\n");
    scanf("%d",&n);
    a1=n; 
    
    while(n!=0)
    {
    	sum = n % 10; 
    	if(a1==n || n/10==0)
    	{
    		a2=a2+sum; 		
		}
    	n = n /10; 
	}
 
 	printf("sum of first and last digit =%d",a2);
    
    return 0;
}