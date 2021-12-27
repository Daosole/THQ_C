#include <stdio.h>
#include <math.h>
int main(void)
{
    float integral(float (*a)(float), float, float, int);
    float psin(float);
    float pcos(float);
    float pexp(float);
    float a1, b1, a2, b2, a3, b3, re, (*p)(float); //积分上下限 a 和 b
    int n = 30;
    // sinx
    printf("input a1 b1 to calculate sinx:\n");
    scanf("%f,%f", &a1, &b1);
    //cosx
    printf("input a2 b2 to calculate cosx:\n");
    scanf("%f,%f", &a2, &b2);
    // e^x
    printf("input a3 b3 to calculate e^x:\n");
    scanf("%f,%f", &a3, &b3);
    p = psin; // p为指向函数的指针
    re = integral(p, a1, b1, n);
    printf("The integral of sinx: %f\n", re);
    //
    p = pcos; // p为指向函数的指针
    re = integral(p, a2, b2, n);
    printf("The integral of cosx: %f\n", re);
    //
    p = pexp; // p为指向函数的指针
    re = integral(p, a3, b3, n);
    printf("The integral of e^x: %f\n", re);

    return 0;
}

float integral(float (*p)(float), float a, float b, int n)
{
    int i;
    float x, h, s;
    h = (b - a) / n;
    x = a;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        x = x + h;
        s = s + (*p)(x)*h;
    }
    return s;
}

float psin(float x)
{
    return sin(x);
}
float pcos(float x)
{
    return cos(x);
}
float pexp(float x)
{
    return exp(x);
}