#include <stdio.h>
#define N 100000
int main(void)
{
    float i, m;
    float r1 = 0.1, r2 = 0.075, r3 = 0.05, r4 = 0.03, r5 = 0.015, r6 = 0.01;
    printf("Enter the profit:");
    scanf("%f", &i);
    if (i <= N)
        m = i * r1;
    else if (i > N && i <= 2 * N)
        m = N * r1 + (i - N) * r2;
    else if (i > 2 * N && i <= 4 * N)
        m = 2 * N * r2 + (i - 2 * N) * r3;
    else if (i > 4 * N && i <= 6 * N)
        m = 4 * N * r3 + (i - 4 * N) * r4;
    else if (i > 6 * N && i <= 10 * N)
        m = 6 * N * r4 + (i - 6 * N) * r5;
    else   
        m = 10 * N * r6;

    printf("The Bonus is %f\n", m);

    return 0;
}