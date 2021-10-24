#include <stdio.h>
#define N 100000
int main(void)
{
    double i, m;                                                              //i 利润 m 钱
    double r1 = 0.1, r2 = 0.075, r3 = 0.05, r4 = 0.03, r5 = 0.015, r6 = 0.01; //比率
    double b1, b2, b4, b6, b10;                                               //节点的利润值
    b1 = N * r1; // 100000 元时的奖金
    b2 = b1 + N * r2; // 200000 时的奖金
    b4 = b2 + 2 * N * r3; // 400000 时的奖金
    b6 = b4 + 2 * N * r4; // 600000 时的奖金
    b10 = b6 + 4 * N * r5; // 1000000 时的奖金
    printf("Enter the profit:");
    scanf("%lf", &i);
    if (i <= N)
        m = i * r1;
    else if (i <= 2 * N)
        m = b1 + (i - N) * r2;
    else if (i <= 4 * N)
        m = b2 + (i - 2 * N) * r3;
    else if (i <= 6 * N)
        m = b4 + (i - 4 * N) * r4;
    else if (i <= 10 * N)
        m = b6 + (i - 6 * N) * r5;
    else
        m = b10 + (i - 10 * N) * r6;

    printf("The Bonus is %lf\n", m);

    return 0;
}