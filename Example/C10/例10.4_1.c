// 输出 stu.dat
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

int main(void)
{
    int i;
    FILE *fp;
    if ((fp = fopen("stu.dat", "rb")) == NULL)
    {
        printf("Can't open file!\n");
        exit(0);
    }
    for (i = 0; i < SIZE; i++)
    {
        fread(&stu[i], sizeof(struct Student), 1, fp);
        printf("%-10s %4d %4d %-15s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].addr);
    }
    fclose(fp);
    return 0;
}