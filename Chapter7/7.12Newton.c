#include <stdio.h>
#include <math.h>

int main(void)
{
    double compute(double a, double b, double c, double d);
    double a, b, c, d;
    printf("Please input the value of a, b, c, d:\n");
    scanf("%lf,%lf,%lf,%lf", &a, &b, &c, &d);

    printf("The root of equation is %10.8lf", compute(a, b, c, d));

    return 0;
}

double compute(double a, double b, double c, double d)
{
    double fx(double a, double b, double c, double d, double x);
    double dx(double a, double b, double c, double d, double x);
    double x0, x1;
    x0 = 1;
    x1 = x0 - fx(a, b, c, d, x0) / dx(a, b, c, d, x0);
    do 
    {
        x0 = x1;
        x1 = x0 - fx(a, b, c, d, x0) / dx(a, b, c, d, x0);
    } while (fabs(x1 - x0) > 1e-5);

    return x1;
}

double fx(double a, double b, double c, double d, double x) // 原函数
{
    return x = a * x * x * x + b * x * x + c * x + d;
}

double dx(double a, double b, double c, double d, double x) //导数
{
    return x = 3 * a * x * x + 2 * b * x + c;
}