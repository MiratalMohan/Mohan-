#include <stdio.h>

int main(void) {
	char ar;
	scanf("%c",&ar);
	if(ar>='a' && ar<='z'||ar>='A'&& ar<='Z')
	{
		if(ar=='a'||ar=='e'||ar=='i'||ar=='o'||ar=='u'||ar=='A'||ar=='E'||ar=='I'||ar=='O'||ar=='U')
		{
			printf("Vowel");
		}
		else
		{
			printf("Consonant");
		}
	}
	else
	{
		printf("invalid");
	}
	return 0;
}
