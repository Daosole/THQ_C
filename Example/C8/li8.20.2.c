// 用字符型指针变量作实参
#include <stdio.h>
int main(void)
{
    void copy_string(char from[], char to[]);
    char a[] = "I am a teacher.";
    char b[] = "You are a student.";
    char *from = a, *to = b;
    printf("string a=%s\nstring b=%s\n", a, b);
    printf("copy string a to string b:\n");
    copy_string(from, to); // 实参为字符指针变量
    printf("\nstring a = %s\nstring b = %s\n", a, b);
    return 0;
}

void copy_string(char from[], char to[]) // 形参为字符数组
{
    int i = 0;
    while (from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}