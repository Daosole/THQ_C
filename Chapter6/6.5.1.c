#include <stdio.h>
int main(void)
{
    int n;
    printf("input length of array:\n");
    scanf("%d", &n);
    int a[n], b[n];
    int i;
    for (i = 0; i < n; i++) //初始化数组 a
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

    }
    printf("原来的数组顺序为:\n");
    for (i = 0; i < n; i++) //输出 数组 a
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    // 对原来数组变换 使其逆序输出
    for (i = 0; i < n; i++)
    {
        b[(n - 1) - i] = a[i];
    }
    // 输出变化后的数组
    printf("改变后的数组为:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", b[i]);
    }

    return 0;
}