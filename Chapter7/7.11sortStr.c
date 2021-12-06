#include <stdio.h>
#include <string.h>
#define N 10
int main(void)
{
    void sort(char s[]);
    char str[N + 1];
    int i;
    printf("Input ten characters:\n");
    gets(str);
    while ((i = strlen(str)) != N)
    {
        printf("Please input again:\n");
        gets(str);
    }

    sort(str);
    printf("The sorted string is:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

void sort(char s[])
{
    char temp;
    int i, j;
    for (j = 0; j < N - 1; j++) //循环次数 比较趟数
    {
        for (i = 0; i < N - 1 -j && s[j] != '\0'; i++)
        {
            if (s[i] > s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }
}