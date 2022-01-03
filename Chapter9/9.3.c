/* 编写一个函数 print 打印一个学生的成绩数组， 该数组中有 5 个学生的数据记录
每个记录包括 num name score[3],用主函数输入这些记录，用 print 函数输出这些记录 */
#include <stdio.h>
#define N 5
struct Student
{
    int num;
    char name[20];
    float score[3];
};

int main(void)
{
    void print(struct Student stu[]);
    int i;
    struct Student stu[N];
    printf("请输入 %d 个学生的学号，姓名和三门课成绩:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0],
              &stu[i].score[1], &stu[i].score[2]);
    }
    printf("\n*************************************************\n");
    printf("No.   name       c1    c2    c3\n");
    print(stu);

    return 0;
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