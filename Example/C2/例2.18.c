// 将例 2.16 表示的算法用 C 语言表示。求 5！
#include <stdio.h>
int main(void)
{
    int i, t;
    t = 1;
    i = 2;
    while (i <= 5)
    {
        t = t * i;
        i = i + 1;
    }
    printf("%d\n", t);
    return 0;
}