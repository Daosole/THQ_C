#include <stdio.h>
#include <string.h>
#define N 100
int word, number, space, others;
int main(void)
{
    void count(char s[]);
    char str[N];
    printf("Input string:\n");
    gets(str);
    word = number = space = others = 0;
    count(str);
    printf("The words of this article: %d\n", word);
    printf("The numbers of this article: %d\n", number);
    printf("The spaces of this article: %d\n", space);
    printf("The other characters of this article: %d\n", others);
    return 0;
}

void count(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            word++;
        else if (s[i] >= '0' && s[i] <= '9')
            number++;
        else if (s[i] == ' ')
            space++;
        else
            others++;
    }
}