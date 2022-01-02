#include <stdio.h>
struct // 声明无名结构体类型
{
    int num;       // 成员编号
    char name[20]; // 成员姓名
    char sex;      // 成员性别
    char job;      // 职业
    union          // 无名共用体类型
    {
        int clas;          // 班级
        char position[10]; // 职务
    } category;            // 共用体变量
} person[2];               // 结构体数组 两个元素

int main(void)
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("please enter the data of person:\n");
        scanf("%d %s %c %c", &person[i].num, &person[i].name,
              &person[i].sex, &person[i].job); // 输入前 4 项
        if (person[i].job == 's')
            scanf("%d", &person[i].category.clas); // 如果是学生，输入班级
        else if (person[i].job == 't')
            scanf("%s", person[i].category.position); // 如果是教师，输入职务
        else
            printf("INPUT ERROR!\n");
    }
    printf("\n");
    printf("NO.    name       sex  job  class/position\n");
    for (i = 0; i < 2; i++)
    {
        if (person[i].job == 's')
            printf("%-6d %-10s %-4c %-4c %10d\n", person[i].num, person[i].name,
                    person[i].sex, person[i].job, person[i].category.clas);
        else
             printf("%-6d %-10s %-4c %-4c %10s\n", person[i].num, person[i].name,
                    person[i].sex, person[i].job, person[i].category.position);
    }

    return 0;
}