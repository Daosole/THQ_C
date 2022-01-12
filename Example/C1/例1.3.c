// 求两个整数中的较大者
#include <stdio.h>
int main(void)
{
    int max(int x, int y); // 函数声明
    int a, b, c;
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("max=%d\n", c);
    return 0;
}

int max(int x, int y) // 函数定义
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return z;
}