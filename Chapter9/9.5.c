/* 有 10 个学生，每个学生的数据包括学号，姓名，3 门课程的成绩，从键盘输入 10 个学生
数据，要求输出 3 门课程总平均成绩，以及最高分的学生的数据 包括学号，姓名，3 门成绩
平均分数 
*/
#include <stdio.h>
#define N 10
struct Student
{
    int num;
    char name[10];
    float score[3];
    float aver;
} s[N];

int main(void)
{
    int i, m = 0;
    float aver; // aver 用来计算总的平均分数
    printf("Please input %d data of students:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &s[i].num, s[i].name, &s[i].score[0], &s[i].score[1],
              &s[i].score[2]);
        s[i].aver = (s[i].score[0] + s[i].score[1] + s[i].score[2]) / 3.0;
        aver += s[i].aver;
    }
    aver = aver / N;
    printf("\n*********************************************************\n");
    printf("NO.   name       c1    c2    c3    aver\n");
    for (i = 0; i < N; i++)
    {
        printf("%-5d %-10s %-5.1f %-5.1f %-5.1f %-6.2f\n", s[i].num, s[i].name,
                s[i].score[0], s[i].score[1], s[i].score[2], s[i].aver);
    }
    printf("The all average score is: %f\n", aver);
    printf("\n*************************************\n");
    printf("The High Score Student is:\n");
    for (i = 1; i < N; i++)
    {
        if (s[i].aver > s[m].aver)
        m = i;
    }
    printf("\n");
    printf("%-5d %-10s %5.1f %5.1f %5.1f %6.2f\n", s[m].num, s[m].name,
                s[m].score[0], s[m].score[1], s[m].score[2], s[m].aver);
    
    return 0;
}