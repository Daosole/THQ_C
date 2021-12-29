#include <stdio.h>
#include <math.h>
int main(void)
{
    float avg(int *p, int , int);
    // void under(int a[][], int n);
    // void senior(int a[][], int n);
    int a[4][5], i, j;
    float avg_1;
    int *p;
    p = &a[0][0];
    printf("input a 4*5 matrix:\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
    }
    avg_1 = avg(p, 4, 5);

    printf("First clash avg mark is:\n", avg_1);

    return 0;
}

float avg(int *p, int a, int b)
{
    int i, j = 0, sum = 0;
    for (i = 0; i < a; i++)
    {
        sum = sum + *(p + i*b + j);
    }
    return sum / b;
}