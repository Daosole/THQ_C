#include <stdio.h>
#define N 100
int main(void)
{
    void sort(int **p, int n);
    int i, n, a[N], **p, *str[N];
    printf("你想输入多少个数?\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        str[i] = &a[i]; // 指针数组存放数组 a 的元素的地址
    }
    printf("输入这 %d 个数.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", str[i]);
    }
    p = str;
    sort(p, n);
    printf("RESULT:\n");
    printf("**************************************\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *str[i]);
    }
    printf("\n");
    return 0;
}

void sort(int **p, int n)
{
    int i, j, *t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (**(p + i) > **(p + j))
            {
                t = * (p + i);
                * (p + i) = * (p + j);
                * (p + j) = t;
            }
        }
    }
}