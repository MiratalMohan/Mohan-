#include <stdio.h>

int main(void) {
	char ar;
	scanf("%c",&ar);
	if(ar>='a'&&ar<='z'||ar>='A'&&ar<='Z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
	return 0;
}
