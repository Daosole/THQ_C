// 用一个 days 函数实现第一题
#include <stdio.h>
struct Date
{
    int year;
    int month;
    int day;
};

int main(void)
{
    int days(struct Date * p);
    struct Date d, *pt;
    int result;
    printf("请输入日期 格式yyyy.mm.dd\n");
    scanf("%d.%d.%d", &d.year, &d.month, &d.day);
    pt = &d;
    result = days(pt);
    printf("*********************************************************\n");
    printf("%d 年的第 %d 天", d.year, result);

    return 0;
}

int days(struct Date *p)
{
    int i, count = 0, mn[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (p->month == 1)
    {
        count = p->day;
    }
    else
    {
        if (((p->year % 4 == 0) && (p->year % 100 != 0)) || (p->year % 400 == 0)) // 判断闰年
        {
            mn[1] = 29;
            for (i = 0; i < p->month - 1; i++)
            {
                count += mn[i];
            }
            count = count + p->day;
        }
        else
        {
            for (i = 0; i < p->month - 1; i++)
            {
                count += mn[i];
            }
            count = count + p->day;
        }
    }

    return count;
}