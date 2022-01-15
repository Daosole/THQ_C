// 对 10 个数组元素依次赋值为 0 - 9，要求按逆序输出
#include <stdio.h>
int main(void)
{
    int i, a[10];
    for (i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}