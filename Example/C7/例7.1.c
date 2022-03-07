/* 用函数调用实现 输出下面的结果
******************
How do you do!
******************
*/
#include <stdio.h>
int main(void)
{
    void print_star(); // 声明函数
    void print_message();
    print_star(); // 调用函数
    print_message();
    print_star();
    return 0;
}

void print_star() // 定义函数
{
    printf("******************\n");
}

void print_message()
{
    printf("How do you do!\n");
}