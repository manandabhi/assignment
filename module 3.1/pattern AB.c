#include<stdio.h>
int main()
{
	int row,col;
	char a='A';
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c",a+col-1);
		
		}
		printf("\n");
	}
	return 0;
}