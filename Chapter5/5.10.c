#include<stdio.h>
int main(void)
{
    double n1 = 2.0, n2 = 3.0, d1 = 1, d2 = 2, term, sum = 0;
    int i;
    sum = n1/d1 + n2/d2; //按照分子 分母分别的规律加和
    for(i = 3; i <= 20; i++) 
    {
        n1 = n1 + n2;
        n2 = n2 + n1;
        d1 = d1 + d2;
        d2 = d2 + d1;
        term = n1/d1;
        sum = sum + term;
    }

    printf("%.10lf\n",sum);

    return 0;
    
}