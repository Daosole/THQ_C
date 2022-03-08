// 简单的函数递归调用
#include <stdio.h>
int main(void)
{
    int age(int n);
    printf("No.5 age: %d\n", age(5));
    return 0;
}

int age(int n)
{
    int c;
    if (n == 1) // 如果 n 等于 1
        c = 10; // 年龄为 10
    else
        c = age(n - 1) + 2; // 年龄是前一个学生年龄加 2
    return c;
}