#include <stdio.h>
#include <string.h>
int main(void)
{
	void strCpVow(char s1[], char s2[]);
	// 元音字母 A E I O U a e i o u
	char s1[100], s2[100];
	printf("Please input one string:\n");
	gets(s1);
	
	strCpVow(s1, s2);
	return 0;
}

void strCpVow(char s1[], char s2[])
{
	int i, j;
	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == 'A' || s1[i] == 'E' ||s1[i] == 'I' ||s1[i] == 'O' ||s1[i] == 'U' || s1[i] == 'a' || s1[i] == 'e' ||s1[i] == 'i' ||s1[i] == 'o' ||s1[i] == 'u'){
			s2[j] = s1[i];
			j++;
		}
	}
	s2[j] = '\0';
	puts(s2);
}