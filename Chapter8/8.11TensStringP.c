#include <stdio.h>
#include <string.h>
#define C 10 // column
int main(void)
{
    void Order(char (*p)[C]);
    int i;
    char str[10][C];
    char (*p)[C]; // 指向一维数组的指针
    printf("Enter 10 strings:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%s", str[i]);
    }
    p = str;

    Order(p);

    printf("RESULT:\n");
    printf("****************************************************************\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}

void Order(char (*p)[C])
{
    int i, j;
    char temp[C], *t = temp;
   
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                strcpy(t, p[j]);
                strcpy(p[j], p[j + 1]);
                strcpy(p[j + 1], t);
            }
        }
    }
}