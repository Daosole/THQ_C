#include <stdio.h>
#include <string.h>
int main(void)
{
    void convert(int x);
    int n;
    printf("Please input a integer:\n");
    scanf("%d", &n);
    if (n < 0)
    {
        putchar('-');
        putchar(' ');
        n = -n;
    }
    convert(n);
    printf("\n");
    return 0;
}

void convert(int x)
{
    int i;
    if ((i = x / 10 )!= 0)
    {
        convert(i);
        
    }
    putchar(x % 10 + '0');
    putchar(' ');
}