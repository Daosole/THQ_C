// 输出二维数组任一行任一列元素的值
#include <stdio.h>
int main(void)
{
    int a[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int (*p)[4], i, j; // 指针变量 p 指向包含 4 个整型元素的一维数组
    p = a;
    printf("please enter row and colum:");
    scanf("%d,%d", &i, &j);
    printf("a[%d,%d]=%d\n", i, j, *(*(p + i) + j)); // a[i][j]
    return 0;
}