//二分法 求根
#include <stdio.h>
#include <math.h>
int main(void)
{
    double fx(double x);
    double a = -10.0, b = 10, t;
    while (fabs(b - a) > 1e-5)
    {
        t = (a + b) / 2;
        if (fx(a) * fx(t) < 0)
            b = t;
        else
            a = t;
    }

    printf("%lf\n", t);
    return 0;
}

double fx(double x)
{
    return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}