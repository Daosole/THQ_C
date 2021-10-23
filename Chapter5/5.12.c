#include<stdio.h>
int main(void)
{
    int x = 1,i;
    for(i = 1; i < 10;i++) //天数是 9 天
    {
        x = (x+1)*2;
    }
    printf("%d\n",x);

    return 0;
}