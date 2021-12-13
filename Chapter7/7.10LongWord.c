#include <stdio.h>
#include <string.h>
#define N 100
int main(void)
{
    int alpha(char x);     //判断字符是否为字母
    int longest(char s[]); //最长单词
    int i;
    char str[N];
    printf("Please input one string:\n");
    gets(str);
    printf("The longest word is: ");
    for (i = longest(str); alpha(str[i]); i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

int alpha(char x)
{
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        return 1;
    else
        return 0;
}

int longest(char s[])
{
    int i, point;                                 // point 表示当前字母的起始位置
    int len = 0, length = 0, flag = 1, place = 0; /*flag = 1 表示单词开始 len 来表示单词累计的字母个数 length 表示之前的单词长度
     place 表示最长单词的起始位置                          */
    for (i = 0; i <= strlen(s); i++)
    {
        if (alpha(s[i])) //是字母
        {
            if (flag) // 单词开始
            {
                point = i; //将该单词的下标赋给 point
                flag = 0;
            }
            else
                len++; //单词长度的计算
        }
        else
        {
            flag = 1; // 新单词开始
            if (len >= length) // 比较当前字母长度和之前
            {
                length = len;
                place = point;
                len = 0;
            }
        }
    }

    return place;
}