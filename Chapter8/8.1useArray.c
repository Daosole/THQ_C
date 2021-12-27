#include <stdio.h>
int main(void)
{
    int a[3];
    int i, t, j;
    int *p;

    printf("The number is\n");
    for (p = a; p < a + 3; p++)
    {
        scanf("%d", p);
    }
    printf("\n");
    p = &a[0];
    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 2 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }
        }
    }
    printf("The sorted is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}