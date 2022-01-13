// 要求输出 100~200 之间的不能被 3 整除的数
#include <stdio.h>
int main(void)
{
    int n;
    for (n = 100; n <= 200; n++)
    {
        if (n % 3 == 0)
            continue;
        printf("%d ", n);
    }
    printf("\n");
    return 0;
}