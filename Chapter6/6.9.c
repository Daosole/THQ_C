//折半查找
#include <stdio.h>
int main(void)
{
    int a[15] = {97, 84, 77, 66, 54, 48, 43, 39, 35, 28, 24,23,15,10,7};
    int n;
    printf("Input a number:\n");
    scanf("%d", &n);
    int l = 0, h = 14, mid, sign = 0;  //l 下限， h 上限 mid 中间
    mid = (l + h) / 2;
    while ( l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == n)
        {
            printf("%d\n", mid + 1);
            sign = 0;
            break;
        }
        else if (a[mid] > n)
        {
            l= mid + 1;
        }
        else if (a[mid] < n)
        {
            h = mid - 1;
        }
        
    }
    printf("\n");
    if (sign)
        printf("NULL\n");

    return 0;
    
    
}