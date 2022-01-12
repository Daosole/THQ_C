// 给定一个大写字母，要求用小写字母输出
#include <stdio.h>
int main(void)
{
    char c1, c2;
    c1 = 'A';
    c2 = c1 + 32;
    printf("%c\n", c2); // 输出字符 
    printf("%d\n", c2); // 输出字符的 ASCII 码值
    return 0;
}