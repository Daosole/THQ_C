#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[100], s2[50];
    printf("Input string one:\n");
    gets(s1);
    printf("Input string two:\n");
    gets(s2);
    int i = 0, j = 0;
    i = strlen(s1);
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    // printf("%s", s1);
    puts(s1);

    return 0;
}