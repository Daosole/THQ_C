#include <stdio.h>
int main(void)
{
    void tranp(int *p);
    int a[3][3], *p;
    int i, j;
    printf("Input 3*3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    p = &a[0][0];
    tranp(p);

    printf("After changed:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%5d %5d %5d\n", a[i][0], a[i][1], a[i][2]);
    }

    return 0;
}

void tranp(int *p)
{
    int i, j, temp;
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            temp = *(p + i * 3 + j);
            *(p + i * 3 + j) = *(p + j * 3 + i);
            *(p + j * 3 + i) = temp;
        }
    }
}