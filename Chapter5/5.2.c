#include <stdio.h>
#include <math.h>
int main(void)
{
    int sign = 1; //数值符号
    double pi = 0.0, n = 1.0, term = 1.0;
    int i = 0; // 计数

    while (fabs(term) >= 1e-6)
    {
        pi = pi + term;
        n = n + 2;
        sign = -sign;
        term = sign / n;
        i++;
    }

    pi = pi * 4;
    printf("pi = %10.8f\n", pi);
    printf("循环次数 %d\n", i);

    return 0;
}