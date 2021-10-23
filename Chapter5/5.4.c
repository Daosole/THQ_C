#include<stdio.h>
int main(void)
{
    char ch;
    int letter = 0, space = 0, number = 0, other = 0; /*letter 字母 space 空格 number 数字 */
    printf("请输入一行字符\n");

    while( (ch = getchar()) != '\n') //关键点
    {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
            letter++;
        else if(ch == ' ')
            space++;
        else if( ch >= '0' && ch <= '9')
            number++;
        else  
            other++;
    }

    printf("字母个数 %d\n空格个数 %d\n数字个数 %d\n其他字符个数 %d\n",letter,space,number,other);

    return 0;
}