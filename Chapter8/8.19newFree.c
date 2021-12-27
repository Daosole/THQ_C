#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
#define LEN 1024
char str[LEN];
int main(void)
{
    char *new(int n);
    void free(void *p);
    char *p;
    int n;
    printf("你想给几个字符开辟空间:\n");
    scanf("%d", &n);
    p = new(n);
    printf("输出首地址:\n");
    printf("%p",p);
    free(p);

    return 0;
    
}

char *new(int n)
{
    
    char *p = str;
    if (p + n < str + LEN)
    {
        p = p + n;
        return (p - n);
    }
    else 
        return NULL;
}

void free(void *p)
{
    char *q = str;
    if (p >= str && p < str + LEN)
    {
        q = p;
    }
}