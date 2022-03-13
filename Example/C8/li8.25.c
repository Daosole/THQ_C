/*
有 a 个学生，每个学生有 b 门课程的成绩，要求用户输入学生序号后，能输出该学生的全部成绩。
用指针函数来实现
*/
#include <stdio.h>
int main(void)
{
    float score[][4] = {{60, 70, 80, 90}, {56, 89, 67, 88}, {34, 78, 90, 66}};
    float *search(float(*pointer)[4], int n);
    float *p;
    int i, k;
    printf("enter the number of student:");
    scanf("%d", &k);
    printf("The scores of No.%d are:\n", k);
    p = search(score, k);
    for (i = 0; i < 4; i++)
    {
        printf("%5.2f\t", *(p + i));
    }
    printf("\n");
    return 0;
}

float *search(float (*pointer)[4], int n)
{
    float *pt;
    pt = *(pointer + n); // pt 的值是 &score[k][0];
    return pt;
}