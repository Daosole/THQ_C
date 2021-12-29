#include <stdio.h>
#define N 200
int main(void)
{
    char str[N], *pt;
    int i, j, k, m, e, d, ct, a[10], *pa;
    printf("Input one string:\n");
    gets(str);
    pt = &str[0];
    pa = &a[0];
    i = j = ct = 0;
    while (*(pt + i) != '\0')
    {
        if ((*(pt + i) >= '0') && (*(pt + i)) <= '9')
            j++; // j
        else
        {
            if (j > 0)
            {
                d = *(pt + i - 1) - 48;
                k = 1;
                while (k < j)
                {
                    e = 1;
                    for (m = 1; m <= k; m++)
                        e = e * 10;
                    d = d + (*(pt + i - 1 - k) - 48) * e;
                    k++;
                }
                *pa = d;
                ct++;
                pa++;
                j = 0;
            }
        }
        i++;
    }
    if (j > 0)
    {
        d = *(pt + i - 1) - 48;
        k = 1;
        while (k < j)
        {
            e = 1;
            for (m = 1; m <= k; m++)
                e = e * 10;
            d = d + (*(pt + i - 1 - k) - 48) * e;
            k++;
        }
        *pa = d;
        ct++;
        j = 0;
    }
    printf("there are %d numbers. they are:\n", d);
    j = 0;
    pa = a;
    for (j = 0; j < ct; j++)
    {
        printf("%5d ", *(pa + j));
    }
    printf("\n");

    return 0;
}