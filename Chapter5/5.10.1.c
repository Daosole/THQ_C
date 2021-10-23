#include <stdio.h>
int main(void)
{
    double n = 2.0, d = 1.0, term, sum = 0, t;
    int i;
    for (i = 1; i <= 20; i++)
    {
        term = n / d;
        t = n;
        n = n + d;
        d = t;
        sum = sum + term;
    }

    // printf("%.10lf\n",sum);
    printf("%lf\n", sum);

    return 0;
}