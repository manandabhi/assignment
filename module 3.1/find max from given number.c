#include<stdio.h>
int main()
{	
	int a1,sum,a2=0;
    
    printf("enter any number:\n");
    scanf("%d",&a1);
    
    
    while(a1!=0) 
    {
    	sum = a1 % 10; 
    	if(sum>a2) 
    	{
    		a2=sum; 	
		}
    	a1 =a1 /10;  
	}
 
 	printf("Max digit number =%d",a2);
	return 0;
}