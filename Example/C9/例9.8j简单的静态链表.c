// 简单链表，由 3 个学生数据的结点组成，要求各结点中数据
#include <stdio.h>
struct Student
{
    int num;
    float score;
    struct Student *next; // 声明结构体类型 struct Student
};
int main(void)
{
    struct Student a, b, c, *head, *p; // 3 个结构体变量，a, b, c 作为链表的结点
    a.num = 10101, a.score = 89.5;
    b.num = 10103, b.score = 90;
    c.num = 10107, c.score = 85; // 对 3 个结构体中成员赋值
    head = &a;                   // a 的起始地址赋给头指针 head
    a.next = &b;                 // 将结点 b 的起始地址赋给 a 的 next 成员
    b.next = &c;
    c.next = NULL; // c 结点的 next 成员不存放其他结点地址
    p = head;
    do
    {
        printf("%ld %5.1f\n", p->num, p->score);
        p = p->next;
    } while (p != NULL);

    return 0;
}