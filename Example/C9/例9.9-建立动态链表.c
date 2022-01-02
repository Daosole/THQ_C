// 动态链表 建立链表额函数
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student *next;
};
int n;                      // 全局变量，所有函数和模块都可以使用它
struct Student *creat(void) // 定义函数，返回一个指向链表头的指针
{
    struct Student *head;
    struct Student *p1, *p2;
    n = 0;
    p1 = p2 = (struct Student *)malloc(LEN); // 开辟一个新单元
    printf("input the student's number and score(input 0 0 to end):\n");
    scanf("%ld %f", &p1->num, &p1->score);   // 输入第一个学生的信息 学号和成绩
    head = NULL;
    while (p1->num != 0)
    {
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct Student *)malloc(LEN);    // 开辟动态存储区，把起始地址赋给 p1
        scanf("%ld %f", &p1->num, &p1->score); // 输入其他学生的信息
    }
    p2->next = NULL;
    return head;
}

int main(void)
{
    struct Student *pt;
    pt = creat();
    printf("\nnum; %ld\nscore:%5.1f\n",pt->num, pt->score);
    return 0;
}