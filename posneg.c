#include <stdio.h>

int main(void)
{
	int i;
	printf("Enter the number:");
	scanf("%d",&i);
	if(i>0)
	{
		printf("\nPositive");
	}
	else if(i<0)
	{
		printf("\nNegative");
	}
	else
	{
		printf("\nZero");
	}
	return 0;
}
