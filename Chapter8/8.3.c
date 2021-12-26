#include <stdio.h>
#define N 10
int main(void)
{
    void input(int *);
    int a[N];
    void swap(int *);
    void output(int *);

    input(a);
    swap(a);
    output(a);

    return 0;
}

void input(int *p)
{
    int i;
    printf("Please input ten numbers:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", p + i);
    }
    printf("\n");
}

void swap(int *a)
{
    int *max, *min, *p, t;
    max = min = a;
    for (p = a + 1; p < a + 10; p++) //找出最小值位置，将其地址赋给 min
    {
        if (*p < *min)
            min = p;
    }
    t = a[0];
    a[0] = *min;
    *min = t;

    for (p = a + 1; p < a + 10; p++)
    {
        if (*p > *max)
            max = p;
    }
    t = a[9];
    a[9] = *max;
    *max = t;

}

// 输出
void output(int *p)
{
    printf("the numbers:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", *(p + i));
    }
}