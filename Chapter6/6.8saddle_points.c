//鞍点 saddle points
#include <stdio.h>
#define M 3 //行
#define N 3 //列
int main(void)
{
    int i, j, k, a[M][N], flag, rowmax, rowmax_j;
    // flag 标识变量 rowmax 行最大值，rowmax_j 行最大值所在的列数
    printf("输入一个 %d*%d 的矩阵\n", M, N); //输入数组
    for (i = 0; i < M; i++)    
    {
        for (j = 0; j < N; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("输入的矩阵为\n"); //输出矩阵
    for (i = 0; i < M; i++)    
    {
        for (j = 0; j < N; j++)
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
    // saddle points
    for (i = 0; i < M; i++)
    {
        rowmax = a[i][0]; //设第i行第一个数为最大值 
        for (j = 0; j < N; j++)
        {
            if (a[i][j] > rowmax)
            {
                rowmax = a[i][j];
                rowmax_j = j; //记录行最大值所在的列数
            }
        }
        
        flag = 1; //假设行最大值就是鞍点

        // 用 rowmax 和所在列的数进行比较
        for (k = 0; k < M; k++) 
        {
            if (a[k][rowmax_j] < rowmax)
            {
                // 如果 rowmax 所在列的数都小于 rowmax 说明该行的 rowmax 不是鞍点
                flag = 0;
            }
        }

        if (flag == 1)
        {
            printf("鞍点为 a[%d][%d] = %d ", i, rowmax_j, rowmax);
            break; //找到鞍点，跳出循环
        }
    }

    if (flag == 0) // 全部搜寻完毕后还是没有找到 说明该矩阵没有鞍点
    {
        printf("没有鞍点!\n");
    }

    return 0;
}