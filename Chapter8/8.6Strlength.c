#include <stdio.h>
#define N 100
int main(void)
{
    int StrLen(char *);
    char *str[N];
    int len;
    printf("Please input a string:\n");
    gets(str);
    len = StrLen(str);
    printf("The length of this string is %d\n", len);

    return 0;
}

int StrLen(char *p)
{
    int r = 0; // result
    for (; *p != '\0'; p++)
    {
        r++;
    }

    return r;
}