// 定义一个结构体变量（包括年月日）。计算该日是本年中是第几天。注意闰年问题
#include <stdio.h>
struct Date
{
    int year;
    int month;
    int day;
};
int main(void)
{
    struct Date d;
    int i, count = 0, mn[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("请输入日期，格式yyyy.mm.dd\n");
    scanf("%d.%d.%d", &d.year, &d.month, &d.day);
    if (d.month == 1)
        count = d.day;
    else
    {
        if (((d.year % 4 == 0) && (d.year % 100 != 0)) || (d.year % 400 == 0)) // 判断闰年
        {
            mn[1] = 29;
            for (i = 0; i < d.month - 1; i++)
            {
                count += mn[i];
            }
            count = count + d.day;
        }
        else
        {
            for (i = 0; i < d.month - 1; i++)
            {
                count += mn[i];
            }
            count = count + d.day;
        }
    }
    printf("*********************************************************\n");
    printf("%d 年的第 %d 天", d.year, count);

    return 0;
}