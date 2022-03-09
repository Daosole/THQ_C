// 7.20 有一个字符串，内有若干字符，现输入一个字符，要求程序将字符串中该字符删去
#include <stdio.h>
int main(void)
{
    extern void enter_string(char str[]);
    extern void delete_string(char str[], char ch);
    extern void print_string(char str[]);
    char c, str[30];
    enter_string(str);
    scanf("%c", &c);
    delete_string(str, c);
    print_string(str);
    return 0;
}
// gcc -o 7.20.out 20-1.c 20-2.c 20-3.c 20-4.c 