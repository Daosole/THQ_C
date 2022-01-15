// 有一个 3*4 的矩阵，要求求出最大值的值和所在的行和列
#include <stdio.h>
int main(void)
{
    int i, j, row = 0, colum = 0, max;
    int a[3][4] = {{1, 2, 3, 4},
                   {9, 8, 7, 6},
                   {-10, 10, -5, 2}};
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                colum = j;
            }
        }
    }
    printf("max=%d\nrow=%d\ncolum=%d\n", max, row, colum);
    return 0;
}