#include <stdio.h>
#include <string.h>
#define N 100
int main(void)
{
    char pw[N], og[N]; //p password 密文 o origin 原文
    int i;
    printf("请输入密文:\n");
    gets(pw);

    for (i = 0; pw[i] != '\0'; i++)
    {
        if (pw[i] >= 'A' && pw[i] <= 'Z')
            og[i] = 155 - pw[i]; // A 的 ASCII 码值为 65 Z 的为90
        else if (pw[i] >= 'a' && pw[i] <= 'z')
            og[i] = 219 - pw[i]; // a ASCII值 97 z 122
        else   
            og[i] = pw[i];
    }

    printf("密文为:\n");
    puts(pw);
    printf("\n");
    printf("原文为:\n");
    puts(og);

    return 0;
}