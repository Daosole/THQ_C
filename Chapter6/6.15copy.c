#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[50], s2[50];
    int i, len;
    printf("input strings:\n");
    gets(s2);
    len = sizeof(s2);
    for (i = 0; i <= len; i++)
    {
        s1[i] = s2[i];
    }

    printf("Copied String is:\n");
    puts(s1);

    return 0;
}