// 有 n 个学生的信息（学号，姓名，成绩)，要求按照成绩的高低顺序输出各学生的信息
#include <stdio.h>
struct Student
{
    long num;
    char name[20];
    float score;
};
int main(void)
{
    struct Student stu[5] =
    {
        {10101, "zhang", 78},
        {10103, "wang", 98.5},
        {10106, "li", 85},
        {10108, "lang", 73.5},
        {10101, "sun", 100},
    }; // 定义结构体数组并初始化
    struct Student temp; // 用于交换的临时变量 
    const int n = 5;
    int i, j, k;
    printf("The order is:\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (stu[j].score > stu[k].score)
            {
                k = j;
                temp = stu[k];
                stu[k] = stu[j];
                stu[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%6d %8s %6.2f\n", stu[i].num, stu[i].name, stu[i].score);
    }
    printf("\n");
    return 0;
}
