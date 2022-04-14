// 选择法排序
#include <stdio.h>
#define N 10
int main(void)
{
    int a[N], i, j, k, t;
    printf("请输入 %d 个数：\n", N);
    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N-1; i++) //排序从大到小
    {
        k = i; 
        for (j = i + 1; j < N; j++)
        {
            if (a[i] < a[j])
                k = j;
            
            if (k != i)
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
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