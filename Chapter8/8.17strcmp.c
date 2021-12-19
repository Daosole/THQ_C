#include <stdio.h>
#define N 100
int main(void)
{
    int strcmp(char *p1, char *p2);
    char s1[N], s2[N];
    int n;
    printf("Input two strings:\n");
    gets(s1);
    gets(s2);
    n = strcmp(s1, s2);
    printf("Result: %d\n", n);

    return 0;
}

int strcmp(char *p1, char *p2)
{
    int result, i = 0;
    while (*(p1 + i) == *(p2 + i) && *(p1 + i) != '\0')
    {
        i++;
    }
    if (*(p1 + i) == '\0' && *(p2 + i) == '\0')
        return 0;
    else
        return result = *(p1 + i) - *(p2 + i);
}