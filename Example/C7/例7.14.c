// 存放 10 个学生成绩的一位数组，写一个函数求平均分，最高分和最低分
#include <stdio.h>
float Max = 0, Min = 0; // 全局变量
int main(void)
{
    float average(float array[], int n);
    float aver, score[10];
    int i;
    printf("Please enter 10 scores:");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &score[i]);
    }
    aver = average(score, 10);
    printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, aver);
    return 0;
}
float average(float array[], int n)
{
    float sum = array[0], aver;
    int i;
    Max = Min = array[0];
    for (i = 1; i < n; i++)
    {
        if (array[i] > Max)
            Max = array[i];
        else if (array[i] < Min)
            Min = array[i];
        sum = sum + array[i];
    }
    aver = sum / n;
    return aver;
}