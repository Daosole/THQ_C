// 修改 例3.3 程序，使之可以使用于任何大写字母
#include <stdio.h>
int main(void)
{
    char c1, c2;
    c1 = getchar();
    c2 = c1 + 32;
    putchar(c2);
    putchar('\n');
    return 0;
}