// 用函数求整数 a 和 b 中的最大者
// 通过函数名调用函数
#include <stdio.h>
int main(void)
{
    int max(int, int);
    int a, b, c;
    printf("please enter a and b:");
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("a = %d\nb = %d\nmax = %d\n", a, b, c);
    return 0;
}

int max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return z;
}