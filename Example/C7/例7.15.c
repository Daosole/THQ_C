// 若外部变量与局部变量同名
#include <stdio.h>
int a = 3, b = 5; // a, b 是全局变量
int main(void)
{
    int max(int a, int b);
    int a = 8; // a 是局部变量
    printf("max = %d\n", max(a, b));
    return 0;
}
int max(int a, int b) // a, b 是函数的形参
{
    int c;
    c = a > b ? a : b;
    return c;
}