// 对例8.25 中的学生，找出其中有不及格的学生及其学号
#include <stdio.h>
int main(void)
{
    float score[][4] = {{60, 70, 80, 90}, {56, 89, 67, 88}, {34, 78, 90, 66}};
    float *search(float (*pointer)[4]);
    float *p;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        p = search(score + i); // 调用 search 函数，如有不及格返回 score[i][0] 的地址
        // 否则返回 NULL
        if (p == *(score + i))
        {
            printf("No.%d score:", i);
            for (j = 0; j < 4; j++)
            {
                printf("%5.2f ", *(p + j));
            }
            printf("\n");
        }
    }
}

float *search(float (*pointer)[4])
{
    int i = 0;
    float *pt;
    pt = NULL;
    for (; i < 4; i++)
    {
        if (*(*pointer + i) < 60)
            pt = *pointer;
    }
    return pt;
}