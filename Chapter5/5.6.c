#include <stdio.h>
int main(void)
{
    double factorial(double x); //求阶乘的函数
    double sum, i, j;
    sum = 0;
    for (i = 1; i <= 20; i++)
    {
        j = factorial(i);
        sum = sum + j; //求和
    }
    printf("%lf\n", sum);

    return 0;
}

double factorial(double x)
{
    double a, s;
    for (a = 1, s = 1; a <= x; a++)
    {
        s = s * a;
    }

    return s;
}