// 调用函数, 求 3 个整数的大者
#include <stdio.h>
int main(void)
{
    int max();
    extern int A, B, C; // 将外部变量的作用域扩展到从此处开始
    printf("Please input three integer numbers:");
    scanf("%d %d %d", &A, &B, &C);
    printf("max is %d\n", max());
    return 0;
}
int A, B, C;

int max()
{
    int m;
    m = A > B ? A : B;
    if (C > m)
        m = C;
    return m;
}