// 将 n 个结构体变量，内含学生学号，姓名和 3 门课程的成绩。要求输出平均成绩最高的学生的信息
#include <stdio.h>
#define N 3
struct Student
{
    int num;
    char name[20];
    float score[3];
    float aver;
};

int main(void)
{
    void input(struct Student stu[]);
    struct Student max(struct Student stu[]);
    void print(struct Student stu);
    struct Student stu[N], *p = stu;
    input(p);
    print(max(p));
    return 0;
}

void input(struct Student stu[])
{
    int i;
    printf("请输入各学生的信息:学号，姓名，三门课成绩:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0],
              &stu[i].score[1], &stu[i].score[2]);

        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
        // 求平均成绩
    }
}

struct Student max(struct Student stu[])
{
    int i, m = 0; // m 用来存放最高成绩学生在数组中的序号
    for (i = 0; i < N; i++)
    {
        if (stu[i].aver > stu[m].aver)
            m = i;
    }
    return stu[m]; // 返回包含该生信息的结构体元素
}

void print(struct Student s)
{
    printf("成绩最高的学生是:\n");
    printf("学号: %d\n姓名: %s\n三门课成绩: %5.1f, %5.1f %5.1f\n平均成绩: %6.2f\n",
           s.num, s.name, s.score[0], s.score[1], s.score[2], s.aver);
}