// 有两个整数 a 和 b，由用户输入 1，2 或 3，
// 1 为求最大值， 2 为求最小值， 3 为求和
#include <stdio.h>
int main(void)
{
    int fun(int x, int y, int (*p)(int, int));
    int max(int, int);
    int min(int, int);
    int add(int, int);
    int a, b, n;
    printf("plese input a and b:\n");
    scanf("%d %d", &a, &b);
    printf("please choose 1, 2 or 3:");
    scanf("%d", &n);
    if (n == 1)
        fun(a, b, max);
    else if (n == 2)
        fun(a, b, min);
    else if (n == 3)
        fun(a, b, add);
    return 0;
}
int fun(int x, int y, int (*p)(int, int))
{
    int result;
    result = (*p)(x, y);
    printf("%d\n", result);
}

int max(int x, int y)
{
    int z;
    z = x > y ? x : y;
    printf("max = ");
    return z;
}

int min(int x, int y)
{
    int z;
    z = x < y ? x : y;
    printf("min = ");
    return z;
}

int add(int x, int y)
{
    int z;
    z = x + y;
    printf("sum = ");
    return z;
}