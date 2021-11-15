#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[3][80];
    int i, j;
    int upw, low, number, space, other;
    upw = low = number = space = other = 0;
    printf("Input three lines:\n");
    for (i = 0; i < 3; i++)
    {
        gets(str[i]);
        for (j = 0; j < 80 && str[i][j] != '\0'; j++)
        {
            if (str[i][j] >= 'A' && str[i][j] <= 'Z')
                upw++;
            else if (str[i][j] >= 'a' && str[i][j] <= 'z')
                low++;
                else if (str[i][j] >= '0' && str[i][j] <= '9')
                    number++;
                    else if (str[i][j] == ' ')
                        space++;
                            else 
                                other++;    
        }
    }
    printf("\n");

    printf("大写字母 %d 个\n", upw);
    printf("小写字母 %d 个\n", low);
    printf("数字 %d 个\n", number);
    printf("空格 %d 个\n", space);
    printf("其他字符 %d 个\n", other);

    return 0;
    
}