// 有三个字符串，要求找出其中最大者
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[3][20];
    char string[20];
    int i;
    for (i = 0; i < 3; i++)
    {
        gets(str[i]);
    }
    if (strcmp(str[0], str[1]) > 0)
        strcpy(string, str[0]);
    else
        strcpy(string, str[1]);
    if (strcmp(str[2], string) > 0)
        strcpy(string, str[2]);
    printf("\nThe largest string is:\n%s\n", string);
    return 0;
}