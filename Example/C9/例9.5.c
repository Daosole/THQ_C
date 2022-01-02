// 通过指向结构体变量的指针变量输出结构体变量中成员的信息
#include <stdio.h>
#include <string.h>
int main(void)
{
    struct Student
    {
        long num;
        char name[20];
        char sex;
        float score;
    };
    struct Student stu_1;
    struct Student *p;
    p = &stu_1;
    stu_1.num = 10101;
    strcpy(stu_1.name, "Li lin");
    stu_1.sex = 'M';
    stu_1.score = 89.5;
    printf("NO.: %ld\nname:%s\nsex: %c\nscore:%5.1f\n",
           stu_1.num, stu_1.name, stu_1.sex, stu_1.score);

    printf("NO.: %ld\nname:%s\nsex: %c\nscore:%5.1f\n",
           (*p).num, (*p).name, (*p).sex, (*p).score);

    return 0;
}