#include <stdio.h>

int main(void) {
	int k;
	scanf("%d",&k);
	if(k%2==0)
	{
		printf("Even");
	}
	
	else if(k<0)
	{
		printf("invalid");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}

