#include <stdio.h>
#include <string.h>
#define N 80
int main(void)
{
    char s1[N], s2[N];
    int i = 0, result;
    printf("input string one:\n");
    gets(s1);
    printf("input string two:\n");
    gets(s2);

    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++; //从第一个字符开始比较 如果相等 比较下一个 直到 \0 或者两者不等
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        result = 0;
    else
        result = s1[i] - s2[i];

    printf("%d", result);

    return 0;
}