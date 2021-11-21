#include <stdio.h>
int main(void)
{
    void judgeprime(int x);
    int n;
    printf("Please input a number:\n");
    scanf("%d", &n);
    judgeprime(n);
    return 0;
}

void judgeprime(int x)
{
    int i;
    for (i = 2; i*i <= x; i++)
    {
        if (x % i == 0)
            break;
    }

    if(i*i <= x)
    {
        printf("%d is not a prime number.\n", x);
    }
    else   
        printf("%d is a prime number.\n", x);
}