#include<stdio.h>
int main()
{
	int day;
	
	printf("Enter Days of week:\n");
	scanf("%i",&day);
	
	switch(day)
	{
		case 1: printf("\nMonday");
		break;
		
		case 2: printf("\nTuseday");
		break;
		
		case 3: printf("\nWensday");
		break;
		
		case 4: printf("\nThursday");
		break;
		
		case 5: printf("\nFriday");
		break;
		
		case 6: printf("\nSatrday");
		break;
		
		case 7: printf("\nSunday");
		break;
		
		default:printf("\ninvalid Day");
	}
	return 0;
	
}