// 例5.11 改进
#include <stdio.h>
int main(void)
{
    char c;
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // 判断是否是字母
        {
            c = c + 4; // 只要是字母，先加 4
            if (c >= 'Z' && c <= 'Z' + 4 || c > 'z') // 如果是 26 个字母最后 4 个字母之一
                c = c - 26; // c 的值改变为 26 个字母最前面的 4 个字母中对应的字母
        }
        printf("%c", c);
    }
    printf("\n");
    return 0;
}