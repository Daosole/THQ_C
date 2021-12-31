// 将一个学生的信息存放在一个结构体变量中，然后输出这个学生的信息
#include <stdio.h>
int main(void)
{
    struct Student
    {
        long int num;
        char name[20];
        char sex;
        char addr[20];
    } a = {10101, "Li lin", 'M', "123 Beijing road"};
    printf("No. :%d\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);

    return 0;
}