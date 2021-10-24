#include <stdio.h>
#include <math.h>
int main(void)
{
    int sum, n, a, i, b;
    printf("数字 a, 位数 n\n");
    scanf("%d,%d", &a, &n);
    sum = b = a;
    for (i = 1; i < n; i++)
    {
        // printf("%d\n", a);
        a = (a * 10) + b;
        sum = sum + a;
    }

    printf("S = %d\n", sum);
    printf("\n");

    return 0;
}
