#include <stdio.h>
int main(void)
{
    int a, b, c, t;
    int *i, *j, *k;

    printf("Please input three numbers:\n");
    scanf("%d,%d,%d", &a, &b, &c);
    i = &a;
    j = &b;
    k = &c;
    if (*i > *j)
    {
        t = *i;
        *i = *j;
        *j = t;
    }
    if (*i > *k)
    {
        t = *i;
        *i = *k;
        *k = t;
    }
    if (*j > *k)
    {
        t = *j;
        *j = *k;
        *k = t;
    }
    printf("SORTED:\n");
    printf("%d %d %d", a, b, c);

    return 0;
}