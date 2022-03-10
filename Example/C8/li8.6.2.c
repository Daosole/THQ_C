// 通过数组名计算数组元素地址，找出元素的值
#include <stdio.h>
int main(void)
{
    int a[10];
    int i;
    printf("please enter 10 integer numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(a + i)); // 通过数组名和元素序号来计算元素地址，再找到该元素
        // printf("%d ", a + i);
    }
    printf("\n");
    return 0;
}