#include <stdio.h>
#include <string.h>
#define N 100
int main(void)
{
    void swap(char *, char *);
    int strCmp(char *, char *);
    // char s1[N], s2[N], s3[N];
    char *a[N], *b[N], *c[N];
    // a = s1, b = s2, c = s3;
    printf("Input three strings:\n");
    gets(a);
    gets(b);
    gets(c);
    if (strCmp(a, b) > 0) // s1 > s2 exchange
        swap(a, b);
    if (strCmp(a, c) > 0)
        swap(a, c);
    if (strCmp(b, c) > 0)
        swap(b, c);

    printf("After sorted:\n");
    // puts(a);
    // puts(b);
    // puts(c);
    printf("%s\n%s\n%s\n", a, b, c);

    return 0;
}

int strCmp(char *p, char *q)
{
    int i = 0, result;
    while (*(p + i) == *(q + i) && *(p + i) != '\0')
    {
        i++;
    }
    if (*(p + i) == '\0' && *(q + i) == '\0')
        return result = 0;
    else
        return result = *(p + i) - *(q + i);
}

void swap(char *p, char *q)
{
    char *t[N];
    strcpy(t, p);
    strcpy(p, q); //字符数组的交换
    strcpy(q, t);
}