//使用牛顿迭代法求根 1.5
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, x0, x1;
    double fx(double x); //函数
    double dx(double x); //导函数
    x0 = 1.5;
    x1 = x0 - fx(x0) / dx(x0);
    do
    {
        x0 = x1;
        x1 = x0 - fx(x0) / dx(x0);  //迭代公式
    } while (fabs(x1 - x0) > 1e-5); //精度

    printf("%lf", x1);

    return 0;
}

double fx(double x)
{
    x = 2 * x * x * x - 4 * x * x + 3 * x - 6;
    return x;
}

double dx(double x)
{
    x = 6 * x * x - 8 * x + 3;
    return x;
}