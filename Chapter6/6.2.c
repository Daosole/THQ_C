// 选择法排序
#include <stdio.h>
#define N 10
int main(void)
{
    int a[N], i, j, max, t;
    printf("请输入十个数：\n");
    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N-1; i++) //排序从大到小
    {
        max = i; //默认第一个为大值
        for (j = i + 1; j < N; j++)
        {
            if (a[max] < a[j])
            {
                t = a[max];
                a[max] = a[j];
                a[j] = t;
            }
        }
    }

    printf("排序后：\n");
    for ( i = 0; i < N; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
}