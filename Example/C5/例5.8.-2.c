#include <stdio.h>
int main(void)
{
    int f1 = 1, f2 = 1;
    int i;
    for (i = 1; i <= 20; i++)
    {
        printf("%12d %12d", f1, f2);
        if (i % 2 == 0)
            printf("\n");
        f1 = f1 + f2; // 计算出下一个月的兔子数，并存放在 f1 中
        f2 = f2 + f1; // 计算出下两个月的兔子数，并存放在 f2 中
    }
    return 0;
}