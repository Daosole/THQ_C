// 输入 4 个整数，找出其中最大的数。 用函数的嵌套调用来处理
#include <stdio.h>
int main(void)
{
    int max4(int a, int b, int c, int d);
    int a, b, c, d, max;
    printf("Please enter four integer numbers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = max4(a, b, c, d);
    printf("max = %d\n", max);
    return 0;
}

int max4(int a, int b, int c, int d)
{
    int max2(int a, int b);
    int m;
    m = max2(a, b);
    m = max2(m, c);
    m = max2(m, d);
    // m = max2(max2(max2(a,b), c), d);
    return m;
}

int max2(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
    /*
    return (a >= b? a : b);
    */
}