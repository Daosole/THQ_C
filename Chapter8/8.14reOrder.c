#include <stdio.h>
#define N 200
int main(void)
{
    void reSort(int *, int);
    int n, a[N], i, *p;
    printf("How many numbers do you want to input?\n");
    scanf("%d", &n);
    printf("Input %d numbers.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = a;
    reSort(a, n);

    printf("SOTRED:\n");
    for (; p < a + n; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}

void reSort(int *p, int n)
{
    int *p1, *p2; //定义两个指针来进行交换 一个前 一个后
    int i, t;
    for (i = 0; i < n / 2; i++)
    {
        p1 = p + i;
        p2 = p + (n - 1 - i);
        t = *p1;
        *p1 = *p2;
        *p2 = t;
    }
}