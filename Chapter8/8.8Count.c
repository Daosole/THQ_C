#include <stdio.h>
#define N 300
int main(void)
{
    char text[N];
    char *p;
    p = text;
    int Cap, lowc, space, number, others;
    Cap = lowc = space = number = others = 0;
    printf("Input a string:\n");
    gets(text);

    for (; *p != '\0'; p++)
    {
        if (*p >= 'A' && *p <= 'Z')
            Cap++;
        else if (*p >= 'a' && *p <= 'z')
            lowc++;
        else if (*p >= '0' && *p <= '9')
            number++;
        else if (*p == ' ')
            space++;
        else
            others++;
    }

    printf("*******************************************\n");
    printf("The capital of this text is: %d\n", Cap);
    printf("The lowercase of this text is: %d\n", lowc);
    printf("The space of this text is: %d\n", space);
    printf("The number of this text is: %d\n", number);
    printf("The other characters of this text is: %d\n", others);

    return 0;

}