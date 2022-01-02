// 输出链表的函数 output 不完整不能运行
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student *next;
};
int n;

void output(struct Student *head)
{
    struct Student *p;
    printf("\nNow, These %d records are :\n", n);
    p = head;
    if (head != NULL)
    {
        do
        {
            printf("%ld %5.1f\n", p->num, p->score);
            p = p->next;
        } while (p != NULL);
        }
}