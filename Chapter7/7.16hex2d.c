#include <stdio.h>
#include <string.h>
int main(void)
{
    void hex2d(int x);
    long long x;
    printf("请输入一个十六进制的数:\n");
    scanf("%lx", &x);
    printf("转换后的数为:\n");
    hex2d(x);

    return 0;
}

void hex2d(int x)
{
    printf("%ld\n", x);
}