#include<stdio.h>
int main(void)
{
    int i,n;
    for(n = 1; n <= 1000; n++) //外循环寻找完数
    {
        int a;
        for(a = 0,i = 1; i <= n/2; i++) // 内循环输出因子
        {
            if( n % i == 0)
                a = a + i;
        }
        if(n == a)
        {
            printf("%d its factors are ", n);
            for ( i = 1; i <= n/2; i++)
            {
                if( n % i == 0)
                    printf("%d,", i);
            }
            printf("\n");                                                               
        }
    }
    
    return 0;
}