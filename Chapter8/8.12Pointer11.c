#include <stdio.h>
#include <string.h>
#define C 10
int main(void)
{
    void Order(char *p[]);
    int i;
    char *p[10], str[10][20];
    for (i = 0; i < 10; i++)
    {
        p[i] = str[i]; // 将字符串行首地址赋给指针数组
    }
    printf("input ten strings:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%s", p[i]);
    }

    Order(p);
    printf("RESULT:\n");
    printf("*************************************\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", p[i]);
        // puts(p[i]);
    }
    return 0;
}

void Order(char *q[])
{
    int i, j;
    char *t;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (strcmp(*(q + j), *(q + j + 1)) > 0)
            {
                t = *(q + j);
                *(q + j) = *(q + j + i);
                *(q + j + 1) = t;
            }
        }
    }
}
