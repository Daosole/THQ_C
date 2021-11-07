#include <stdio.h>
#define N 5
int main(void)
{
    int a[5] = {8,6,5,4,1};
    int b[5], i, j;
    for (i = 0; i < 5; i++)
    {
        b[4-i] = a[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("%5d", b[i]);
    }

    return 0;
}