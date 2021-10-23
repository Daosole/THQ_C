#include<stdio.h>
int main()
{
    double sum = 100.0, h = sum / 2; // 第一次 100m 后面反弹 相当于经过两次
    int i;
    for(i = 2; i<= 10; i++)
    {
        sum = sum + h*2;
        h = h/2;
        
    }
    
    printf("%lf %lf",sum,h);

    return 0;
}