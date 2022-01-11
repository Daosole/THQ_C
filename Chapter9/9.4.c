// 在第 3 题的基础上，编写一个 input 函数用来输入 5 个学生的数据记录
#include <stdio.h>
#define N 5
struct Student
{
    int num;
    char name[10];
    float score[3];
} stu[N];

int main(void)
{
    void input();
    void print(struct Student stu[]);
    input();

    printf("No.   name       c1    c2    c3\n");
    print(stu);

    return 0;
}

void input()
{
    int i;
    printf("Please input the data of students:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0],
              &stu[i].score[1], &stu[i].score[2]);
    }
}

void print(struct Student stu[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%-5d %-10s %-5.1f %-5.1f %-5.1f\n", stu[i].num, stu[i].name,
                stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
}