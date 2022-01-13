// 用 do while 计算 1 到 100 的和
#include <stdio.h>
int mian(void)
{
    int i = 1, sum = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 100);
    printf("sum=%d\n", sum);
    return 0;
}