// 从键盘输入 10 个学生的有关数据，然后把它们传存到磁盘文件上去
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct Student
{
    char name[10];
    int num;
    int age;
    char addr[15];
} stu[SIZE];

void save()
{
    FILE *fp;
    int i;
    if ((fp = fopen("stu.dat", "wb")) == NULL)
    {
        printf("Can't open file!\n");
        exit(0);
    }
    for (i = 0; i < SIZE; i++)
    {
        if (fwrite(&stu[i], sizeof(struct Student), 1, fp) != 1)
            printf("file write error\n");
    }
    fclose(fp);
}

int main(void)
{
    int i;
    printf("Please input data of students:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%s %d %d %s", stu[i].name, &stu[i].num, &stu[i].age, &stu[i].addr);
    }
    save();
    return 0;
}