#include <stdio.h>
int main(void)
{
    int HCF(int x, int y); //最大公约数
    int LCM(int m, int n); //最小公倍数
    int a, b, p, gcd, lcm;
    printf("Please input two numbers:\n");
    scanf("%d,%d", &a, &b);
    p = a * b;
    gcd = HCF(a, b);
    lcm = LCM(p, gcd);
    printf("The Greatest Common Divisor is %d\n", gcd);
    printf("The Least Common Multiple is %d\n", lcm);

    return 0;
}

int HCF(int x, int y)
{
    int r, t, z;
    if (x < y)
    {
        t = x;
        x = y;
        y = t;
    }
    do
    {
        r = x % y;
        x = y;
        y = r;
    } while (r != 0);

    return x;
}

int LCM(int m, int n)
{
    int q;
    q = m / n;
    return q;
}