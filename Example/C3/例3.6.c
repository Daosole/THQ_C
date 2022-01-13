// 用 %f 输出实数，得到 6 位小数
#include <stdio.h>
int main(void)
{
    double a = 1.0;
    printf("%f\n", a / 3);
    printf("%20.15f\n", a / 3); // 15 位小数
    return 0;
}