// 输入两个学生的学号，姓名和成绩，输出成绩较高的那些学生的信息
#include <stdio.h>
int main(void)
{
    struct Student
    {
        long int num;
        char name[20];
        float score;
    } s1, s2;
    printf("输入两个学生的信息:\n");
    scanf("%d %s %f", &s1.num, s1.name, &s1.score); // 在 name 前没有取地址符 name 是数组名，本身就是地址
    scanf("%d %s %f", &s2.num, s2.name, &s2.score);
    printf("成绩较高者为:\n");
    if (s1.score > s2.score)
    {
        printf("%-5d %s %6.2f\n", s1.num, s1.name, s1.score);
    }
    else if (s1.score < s2.score)
    {
        printf("%-5d %s %6.2f\n", s2.num, s2.name, s2.score);
    }
    else
    {
        printf("%-5d %s %6.2f\n", s1.num, s1.name, s1.score);
        printf("%-5d %s %6.2f\n", s2.num, s2.name, s2.score);
    }

    return 0;
}