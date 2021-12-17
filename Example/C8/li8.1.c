// 通过指针变量访问整型变量
#include <stdio.h>
int main(void)
{
    int a = 100, b = 10;
    int *point1, *point2;
    point1 = &a;
    point2 = &b;
    printf("a=%d, b=%d\n", a, b);
    printf("*point1=%d, *point2=%d\n", *point1, *point2);
    return 0;
}