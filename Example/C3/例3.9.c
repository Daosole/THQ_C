// 从键盘输入 BOY 三个字符，并输出到屏幕上
#include <stdio.h>
int main(void)
{
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    return 0;
}