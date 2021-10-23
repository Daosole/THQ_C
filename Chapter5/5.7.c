#include <stdio.h>
int main(void)
{
    double sum, s1, s2, s3, i, j, k;
    s1 = s2 = s3 = 0;
    for (i = 1; i <= 100; i++)
    {
        s1 = s1 + i;
    }

    for (j = 1; j <= 50; j++)
    {
        s2 = s2 + j * j;
    }

    for (k = 1; k <= 10; k++)
    {
        s3 = s3 + 1 / k;
    }

    sum = s1 + s2 + s3;

    printf("%lf\n", sum);

    return 0;
}