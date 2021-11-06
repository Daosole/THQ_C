// 筛选法求素数
#include <stdio.h>
#define N 100
int main(void)
{
    int a[N], i, j; // 定义长度 100 的数组 i，j 循环控制变量
    for (i = 0; i < N; i++)
    {
        a[i] = i + 1;
    } // 初始化数组 赋值 1-100

    for (i = 1; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (a[i] != 1 && a[j] != 1) // 排除值为 1 的数组元素
                if (a[j] % a[i] == 0)
                    a[j] = 1;  // 将不是素数赋值为 1
        }
            
    }
    for ( i = 0; i < N; i++)
    {
        if (a[i] != 1)
            printf("%d\n", a[i]);
    }
        
       
    return 0;
}