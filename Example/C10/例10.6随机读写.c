// 在磁盘文件中存有 10 个学生的数据。要求将 1，3，5，7，9 个学生数据输入计算机，并且在屏幕上显示出来
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[10];
    int num;
    int age;
    char addr[15];
} stu[10];

int main(void)
{
    int i;
    FILE *fp;
    if ((fp = fopen("stu.dat", "rb")) == NULL)
    {
        printf("Can't open file\n");
        exit(0);
    }
    for (i = 0; i < 10; i += 2)
    {
        fseek(fp, i * sizeof(struct Student), 0); // 移动文件位置标记
        fread(&stu[i], sizeof(struct Student), 1, fp); // 读一个数据块到结构体变量
        printf("%-10s %4d %4d %-15s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].addr);
            // 输出到屏幕
    }
    fclose(fp);

    return 0;
}