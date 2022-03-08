// 数组名作函数参数
// 100 56 78 98 67.5 99 54 88.5 76 58
#include <stdio.h>
int main(void)
{
    float average(float array[10]);
    float score[10], aver;
    int i;
    printf("input 10 scores:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &score[i]);
    }
    printf("\n");
    aver = average(score);
    printf("average score is %5.2f\n", aver);
    return 0;
}

float average(float array[10])
{
    int i;
    float aver, sum = array[0];
    for (i = 1; i < 10; i++)
    {
        sum = sum + array[i];
    }
    aver = sum / 10;
    return aver;
}