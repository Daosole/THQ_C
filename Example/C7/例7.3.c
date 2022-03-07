// 修改例 7.2 函数返回值的类型与指定的函数类型不同
#include <stdio.h>
int main(void)
{
    int max(float x, float y);
    float a, b;
    int c;
    printf("Please enter two integer numbers:");
    scanf("%f,%f", &a, &b);
    c = max(a, b);
    printf("max is %d\n", c);
    return 0;
}
int max(float x, float y)
{
    float z;
    z = x > y ? x : y;
    return z;
}