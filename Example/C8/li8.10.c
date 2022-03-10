// 用指针方法对 10 个整数按由大到小的顺序排序 12 34 5 689 -43 56 -21 0 24 65
#include <stdio.h>
int main(void)
{
    void sort(int x[], int n);
    int i, *p, a[10];
    p = a;
    printf("Plese enter 10 integer numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", p++);
    }
    p = a;
    sort(p, 10);
    for (p = a, i = 0; i < 10; i++)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}

void sort(int x[], int n)
{
    int i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (x[k] < x[j])
                k = j;
            if (k != i)
            {
                t = x[i];
                x[i] = x[k];
                x[k] = t;
            }
        }
    }
}