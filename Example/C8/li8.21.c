// 改变指针变量的值
#include <stdio.h>
int main(void)
{
    char *a = "I love china!";
    a = a + 7;         // 改变了指针的指向
    printf("%s\n", a); // 输出从 a 指向的字符开始的字符串
    return 0;
}