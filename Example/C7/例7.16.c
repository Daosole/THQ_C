// 考察静态局部变量的值
#include <stdio.h>
int main(void)
{
    int f(int);
    int a = 2, i;
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", f(a));
    }
    return 0;
}
int f(int a)
{
    auto int b = 0;
    static int c = 3; // 静态局部变量， 函数调用结束后，并不释放，保留其当前值
    b = b + 1;
    c = c + 1;
    return (a + b + c);
}
