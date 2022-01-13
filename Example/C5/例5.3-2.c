// while, do while 的比较
#include <stdio.h>
int main(void)
{
    int i, sum = 0;
    printf("Please enter i, i=?");
    scanf("%d", &i);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("sum=%d\n", sum);
    return 0;
}