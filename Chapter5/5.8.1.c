#include<stdio.h>
int main(void)
{
    int i,j,k,n;
    for(n = 100; n < 1000; n++)
    {
        i = n / 100; //百位
        j = n/10 - i*10; //十位
        k = n % 10; //个位
        if (n == i*i*i + j*j*j + k*k*k)
            printf("%d\n",n);
    }

    printf("\n");
    return 0;
}