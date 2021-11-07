//插入一个数到已排好序的数组中
#include <stdio.h>
int main(void)
{
    int a[5] = {1,3,5,7,9};
    int b[6];
    int n, i, j, t;
    printf("input a number:\n");
    scanf("%d", &n);
    b[5] = n;
    //输出原数组
    printf("the former array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    // 将原数组中的元素赋值到新数组中
    for (i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    // 进行排序
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    // 输出新数组
    printf("The new array is:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%5d", b[i]);
    }

    return 0;
}