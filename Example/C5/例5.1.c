// 求 1 到 100 的和
#include <stdio.h>
int main(void)
{
    int i, sum = 0;
    while (i <= 100)
    {
        sum = sum + i;
        i++;
    }
    printf("sum=%d\n", sum);
    return 0;
}