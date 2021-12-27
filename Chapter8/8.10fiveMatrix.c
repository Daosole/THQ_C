/*
p + 12 中间位置
p + 0 左上角
p + 4 右上角
p + 20 p + 24
*/
#include <stdio.h>
int main(void)
{
    void change(int *);
    int a[5][5], *p, i, j;
    printf("Input 5*5 matrix:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
    }
    p = &a[0][0]; // p = a;
    change(p);

    printf("\n");
    printf("After Changed:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

void change(int *p)
{
    int *max, *min;
    int i, j, t;
    max = p;
    min = p;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (*max < *(p + i * 5 + j))
                max = p + 5 * i + j;
            if (*min > *(p + i * 5 + j))
                min = p + 5 * i + j;
        }
    } // 找出矩阵中最大值和最小值的位置
    //交换最大值
    t = *(p + 12); // p + 12 中间位置
    *(p + 12) = *max;
    *max = t;
    //交换最小值
    t = *p; // p + 12 中间位置
    *p = *min;
    *min = t;
    // 1
    min = p + 1; //开始找次小值

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 && j == 0) // 跳过 a[0][0]
                continue;
            if (*min > *(p + i * 5 + j))
                min = p + 5 * i + j;
        }
    }
    // exchange
    t = *min;
    *min = *(p + 4);
    *(p + 4) = t;
    // 2
    min = p + 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 4)) // 跳过 p 和 p + 4 a[0][4]
                continue;
            if (*min > *(p + i * 5 + j))
                min = p + 5 * i + j;
        }
    }
    t = *min;
    *min = *(p + 20);
    *(p + 20) = t;
    // 3
    min = p + 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 4) || (i == 4 && j == 0))
            // 跳过 p ,p + 4, p + 20 
                continue;
            if (*min > *(p + i * 5 + j))
                min = p + 5 * i + j;
        }
    }
    t = *min;
    *min = *(p + 24);
    *(p + 24) = t;
}