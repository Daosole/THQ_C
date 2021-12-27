#include <stdio.h>
#include <string.h>
#define C 10 // column
int main(void)
{
    void Order(char s[][C]);
    int i;
    char str[10][10];
    printf("Enter 10 strings:\n");
    for (i = 0; i < 10; i++)
    {
        gets(str[i]);
    }

    Order(str);

    printf("RESULT:\n");
    printf("****************************************************************\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}

void Order(char s[10][C])
{
    int i, j;
    char *p, t[10];
    p = t;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                strcpy(p, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], p);
            }
        }
    }
}