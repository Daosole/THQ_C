// 输入一个大于 3 的整数 n，判断它是否为素数
#include <stdio.h>
int main(void)
{
    int n, i;
    printf("Please enter a integer number, n=?");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i < n)
        printf("%d is not a prime number.\n", n);
    else
        printf("%d is a prime number.\n", n);
    return 0;
}