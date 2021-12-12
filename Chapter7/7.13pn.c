#include <stdio.h>
#include <math.h>
int main(void)
{
    float fn(int n, int x);
    int x, n;
    printf("Please input the value of n and x:\n");
    scanf("%d,%d", &n, &x);
    fn(n, x);
    printf("RESULT: n=%d,x=%d, value = %f\n", n, x, fn(n, x));

    return 0;
}

float fn(int n, int x)
{
    if (n == 0)
        return (1);
    else if (n == 1)
        return (x);
    else
        return ((2 * n - 1) * x - fn((n - 1), x) - (n - 1) * fn((n - 2), x) / n);
}