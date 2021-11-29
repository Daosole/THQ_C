#include <stdio.h>
#define N 3
int main(void)
{
    void convert(int a[N][N]);
    int i, j, a[N][N];
    printf("Please input %d*%d matrix.\n", N, N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The origin matrix is:\n"); // 输出原矩阵
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
    // tranpose
    convert(a);

    return 0;
}

void convert(int a[N][N])
{
    int i, j, b[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("The tranposed matrix is:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%6d", b[i][j]);
        }
        printf("\n");
    }
}