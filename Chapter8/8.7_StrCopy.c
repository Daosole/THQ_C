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
    // char *q, q = s;
    int i;
    p = p + m;
    for (i = 0; *p != '\0'; i++, p++)
    {
        s[i] = *p;
    }
    s[i] = '\0';
    // *(q + i) = '\0';
    puts(s);
}