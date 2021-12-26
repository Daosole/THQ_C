#include <stdio.h>
int main(void)
{
    char *m[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int i;
    printf("input numbers of month:\n");
    scanf("%d", &i);
    printf("%s", m[i - 1]);

    return 0;
}