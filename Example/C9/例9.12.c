// 口袋中有红，黄，蓝，白，黑五种颜色的球若干个。每次从口袋中先后取出 3 个球，为得到 3 中不同颜色的球的可能取法，输出每种排列的情况

#include <stdio.h>
int main(void)
{
    enum Color
    {
        red,
        yellow,
        blue,
        white,
        black
    };                       // 定义枚举类型
    enum Color i, j, k, pri; // 定义枚举变量 i j k pri
    int n, loop;
    n = 0;
    for (i = red; i <= black; i++) // 外循环使 i 的值从 red 变到 black
    {
        for (j = red; j <= black; j++)
        {
            if (i != j) // 如果两球不同色
            {
                for (k = red; k <= black; k++)
                {
                    if ((k != i) && (k != j)) // 如果三球不同色
                    {
                        n = n + 1;                        // 符合条件的次数加 1
                        printf("%-4d", n);                // 输出当前是第几个符合条件的组合
                        for (loop = 1; loop <= 3; loop++) // 先后对 3 个球分别处理
                        {
                            switch (loop) // loop 的值从 1 到 3
                            {
                            case 1:
                                pri = i;
                                break; // loop = 1 将 1 球的颜色赋给 pri
                            case 2:
                                pri = j;
                                break; // loop = 2 将 2 球的颜色赋给 pri
                            case 3:
                                pri = k;
                                break; // loop = 3 将 3 球的颜色赋给 pri
                            default:
                                break;
                            }

                            switch (pri) // 根据球的颜色输出相应的文字
                            {
                            case red:
                                printf("%-10s", "red");
                                break;
                            case yellow:
                                printf("%-10s", "yellow");
                                break;
                            case blue:
                                printf("%-10s", "blue");
                                break;
                            case white:
                                printf("%-10s", "white");
                                break;
                            case black:
                                printf("%-10s", "black");
                                break;
                            default:
                                break;
                            }
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    printf("\nTotal:%5d\n", n);
    return 0;
}