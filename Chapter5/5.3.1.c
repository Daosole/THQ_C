//使用辗转相除法计算最大公因数
#include <stdio.h>
int main(void)
{
    int m, n, r, t, p;
    printf("输入两个正整数:");
    scanf("%d,%d", &m, &n);
    p = m * n;
    if (m < n)
    {
        t = m;
        m = n;
        n = t;
    }
    int gcd, lcm; //gcd greatest common divisor 最大公因数 lcm Least Common Multiple最小公倍数
    do
    {
        r = m % n;
        m = n;
        gcd = n;
        n = r;

    } while (r != 0);

    lcm = p / gcd;

    printf("最大公约数是:%d\t最小公倍数是:%d\n", gcd, lcm);
    return 0;
}