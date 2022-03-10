// 对输入的两个整数按大小顺序输出
#include <stdio.h>
int main(void)
{
    void swap(int *p1, int *p2);
    int a, b;
    int *pointer_1, *pointer_2;
    printf("please enter two integer:");
    scanf("%d,%d", &a, &b);
    pointer_1 = &a;
    pointer_2 = &b;
    if (a < b)
        swap(pointer_1, pointer_2);
    printf("max = %d, min = %d\n", *pointer_1, *pointer_2);
    return 0;
}
void swap(int *p1, int *p2)
{
    int *p;
    p = p1;
    p1 = p2;
    p2 = p;
}
// 无法实现目地，函数是值传递，传递的是指针变量的值，并没有改变指针所指向的值