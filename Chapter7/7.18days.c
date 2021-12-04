#include <stdio.h>
#include <string.h>
int main(void)
{
    int compute(int y, int m, int d);
    int judge_leap(int x);
    int year, month, day, sum;
    printf("请按照下面的格式输入年月日，yyyy.mm.dd,2021.12.02:\n");
    scanf("%d.%d.%d", &year, &month, &day);
    sum = compute(year, month, day);
    printf("The %dth days of %d\n", sum, year);

    return 0;
}

int compute(int y, int m, int d)
{
    int i, sum = 0, mn[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 1)
        return d;
    else
    {
        if (judge_leap(y)) //是闰年
        {
            mn[1] = 29;
            for (i = 0; i < m - 1; i++)
            {
                sum = sum + mn[i];
            }
            return sum + d;
        }
        else
        {
            for (i = 0; i < m - 1; i++)
            {
                sum = sum + mn[i];
            }
            return sum + d;
        }
    }
}

int judge_leap(int x)
{
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) // 闰年
        return 1;
    else
        return 0; //平年
}