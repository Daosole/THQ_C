#include <stdio.h>
#include <string.h>
int main(void)
{
	void revert(char s[]);
	char str[100];
	printf("Input one string:\n");
	gets(str);
	revert(str);
	
	printf("The changed string is:\n");
	puts(str);
	
	return 0;
	
	
}
void revert(char s[])
{
	int i, j;
	char t;
	for (i = 0,j = strlen(s);s[i] != '\0' && i <= j/2; i++) //从中间为界
	{
		t = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = t;
	}
}
	