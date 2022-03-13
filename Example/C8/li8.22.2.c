// 通过指针变量访问它作指向的函数
#include <stdio.h>
int main(void)
{
    int max(int, int);
    int (*p)(int, int);
    int a, b, c;
    p = max;
    printf("please enter a and b:");
    scanf("%d,%d", &a, &b);
    c = (*p)(a, b);
    printf("a = %d\nb = %d\nmax = %d\n", a, b, c);
    return 0;
}
int max(int x, int y)
{
    int z;
    z = x > y ? x : y;
    return z;
}