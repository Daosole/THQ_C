// 改写例8.8 用指针变量作实参 3 7 9 11 0 6 7 5 4 2
#include <stdio.h>
int main(void)
{
    void inv(int *x, int n);
    int i, arr[10], *p = arr;
    printf("The original array:\n");
    for (i = 0; i < 10; i++, p++)
    {
        scanf("%d", p);
    }
    printf("\n");
    p = arr;
    inv(p, 10);
    printf("The array has been inverted:\n");
    for (p = arr; p < arr + 10; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
    return 0;
}

void inv(int *x, int n)
{
    int *p, m, temp, *i, *j;
    m = (n - 1) / 2;
    i = x, j = x + n - 1, p = x + m;
    for (; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
    return ;
}