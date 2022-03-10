// 通过指针变量输出整型数组 a 的 10 个元素
#include <stdio.h>
int main(void)
{
    int *p, i, a[10];
    p = a;
    printf("Please enter 10 integer numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", p++);
    }
    p = a; // 不加此语句，会出现错误，错误的原因是 p 在循环后指向了数组的最后
    for (i = 0; i < 10; i++, p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
    p = a;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *p++);
    }
    return 0;
}
// 综合了例8.7 的讲解