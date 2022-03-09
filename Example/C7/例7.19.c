// file1.c
#include <stdio.h>
int A;
int main(void)
{
    int power(int);
    int b = 3, c, d, m;
    printf("enter the number a and its power m:\n");
    scanf("%d,%d", &A, &m);
    c = A * b;
    printf("%d * %d = %d\n", A, b, c);
    d = power(m);
    printf("%d ** %d = %d\n", A, m, d);
    return 0;
}
// file2.c
extern A;
int power(int n)
{
    int i, y = 1;
    for (i = 1; i <= n; i++)
    {
        y *= A;
    }
    return y;
}
// 使用 gcc 编译 file1.c file2.c
// gcc -o file file1.c file2.c