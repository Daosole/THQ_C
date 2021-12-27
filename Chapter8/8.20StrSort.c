#include <stdio.h>
#include <string.h>
#define LEN 50
int main(void)
{
    void sort(char **p);
    int i;
    char **p, *str[5], s[5][LEN];
    for (i = 0; i < 5; i++)
    {
        str[i] = s[i]; //二维数组的行首地址赋给指针数组
    }
    printf("Input 5 strings:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }
    p = str;
    sort(p);
    printf("RESULT:\n");
    printf("****************************************\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}

void sort(char **p)
{
    int i, j;
    char *t;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(*(p + i), *(p + j)) > 0)
            {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }
        }
    }
}