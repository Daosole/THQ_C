// 输入两个整数，用函数来找到最大数
#include <stdio.h>
int main(void)
{
    int max(int x, int y);
    int a, b, c;
    printf("Please enter two integer numbers:");
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("max is %d\n", c);
    return 0;
}
int max(int x, int y)
{
    int z;
    z = x > y ? x : y;
    return z;
}