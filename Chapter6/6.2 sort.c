// 选择法排序
#include <stdio.h>
#define N 10
int main(void)
{
    int a[N], i, j, t;
    printf("请输入十个数：\n");
    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N; i++) //排序从大到小
    {
        for (j = i + 1; j < N; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for ( i = 0; i < N; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
}