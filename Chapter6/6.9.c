//折半查找
#include <stdio.h>
int main(void)
{
    // 降序排序
    int a[15] = {97, 84, 77, 66, 54, 48, 43, 39, 35, 28, 24, 23, 15, 10, 7};
    // 输出数组
    for (int i = 0; i < 15; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    int n;
    printf("输入要查找的数:\n");
    scanf("%d", &n);
    int l = 0, h = 14, mid, sign = 0, loc = 0; //l 下限， h 上限 mid 中间
    
    if (n > a[0] || n < a[14])
        sign = 1; //sign 为1 表示这个数不cd在数组元素的范围内

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == n)
        {
            printf("这是数组中的第 %d 个数\n", mid + 1);
            loc = 1;
            break;
        }
        else if (a[mid] > n) //降序排序 中间值大于 n 下限移动
        {
            l = mid + 1;
        }
        else if (a[mid] < n)
        {
            h = mid - 1;
        }
    }
    printf("\n");
    if (sign || !loc) //sign = 1 数的范围不在内 并且没有找到所查数的位置，说明数不再数组内
        printf("数组中不存在所查找的数\n");

    return 0;
}