#include <stdio.h>
#include <string.h>
#define N 10
int main(void)
{
    void dit2str(int x);
    int n;
    printf("Please input a integer:\n");
    scanf("%d", &n);
    
    dit2str(n);

    return 0;
}

void dit2str(int x)
{
    int i = 0;
    char str[N];
    if ( x != 0)
    {
        str[i] = (x % 10) + '0';
        dit2str(x / 10);
        i++;
    }
    str[i] = '\0';
    puts(str);
}