#include <stdio.h>
int main(void)
{
    char a[5][9];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j - i >= 0 && j - i <= 4){
                a[i][j] = '*';
                printf("%c", a[i][j]);
            }
            else {  
                a[i][j] = ' ';
                printf("%c", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}