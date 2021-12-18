#include <stdio.h>
#define N 100
int main(void)
{
    void StrnCpy(char *, int);
    int m;
    char str[N];
    printf("Input a string\n");
    gets(str);
    printf("input a integer\n");
    scanf("%d", &m);
    StrnCpy(str, m);

    return 0;
}

void StrnCpy(char *p, int m)
{
    char s[N];
    char *q;
    q = s;
    p = p + m;
    for (; *p != '\0'; q++, p++)
    {
        *q = *p;
    }
    *q = '\0';
    puts(s);
}