#include <stdio.h>
#include <string.h>
int main(void)
{
	void strLk(char s1[], char s2[]);
	char s1[100], s2[50];
	printf("Please input string one:\n");
	gets(s1);
	printf("Please input string two:\n");
	gets(s2);

	strLk(s1, s2);
	printf("The linked string is:\n");
	puts(s1);

	return 0;
}

void strLk(char s1[], char s2[])
{
	int i, j;
	i = strlen(s1);
	for (i, j = 0; s2[j] != '\0'; j++)
	{
		s1[i++] = s2[j];
	}
	s1[i] = '\0';
}