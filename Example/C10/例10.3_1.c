// 输出 string.dat
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char s[3][10];
    int i = 0;
    if ((fp = fopen("string.dat", "r")) == NULL)
    {
        printf("Can't open file!\n");
        exit(0);
    }
    while (fgets(s[i], 10, fp) != NULL)
    {
        printf("%s", s[i]);
        i++;
    }
    fclose(fp);
    return 0;
}