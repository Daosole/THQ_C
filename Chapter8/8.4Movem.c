#include <stdio.h>
#define N 100
#define T n - m
int main(void)
{
    void move(int [N], int, int);
    int a[N], n, m, i;
    printf("你想输入多少个数:\n");
    scanf("%d", &n);
    printf("输入这 %d 个数:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("输入向后移动的位置:\n");
    scanf("%d", &m);
    move(a, n, m);
    printf("\n");
    printf("After changed:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void move(int a[N], int n, int m)
{
	int *p, a_end;
	a_end = *(a + n -1);
	for (p = a + n - 1; p > a; p--)
	{
		*p = *(p - 1);
	}
	*a = a_end;
	m--;
	if (m > 0)
		move(a,n,m);
}

//void move(int a[N], int n, int m)
//{
//    int *p, t[m], i, j;
//    j = n - m;
//    for (i = 0, p = a + j; i < m; i++, p++)
//    {
//        t[i] = *p;
//    }
//
//    for (i = n - 1; i - m >= 0; i--)
//    {
//        p[i] = p[i - m];
//    }
//
//    //test1
//    // for (i = 0; i < n; i++)
//    // {
//    //     printf("p[%d]=%d ", i, p[i]);
//    // }
//
//    for (i = 0; i < m; i++)
//    {
//        p[i] = t[i];
//    }
//}