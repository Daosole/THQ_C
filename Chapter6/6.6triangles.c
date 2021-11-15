//杨辉三角
#include <stdio.h>
#define N 10
int main(void)
{
    int i, j, a[N][N];
    for (i = 0; i < N; i++)
    {
        a[i][0] = a[i][i] = 1; //第一列和对角线的值为 1
    }
    
    for (i = 2; i < N; i++) // 根据规律，第i行的第j个数等于第i-1行的第j-1个数与第j个数之和
    {
        for (j = 1; j <= i - 1; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    // 输出
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}