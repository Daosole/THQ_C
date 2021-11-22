#include <stdio.h>
#include <math.h>
int main(void)
{
    void TwoRoot(double a, double b, double disc);
    void OneRoot(double a, double b);
    void NoRoot(void);
    double a, b, c, disc;
    printf("Please input three numbers:\n");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc > 0)
        TwoRoot(a, b, disc);
    else if (disc == 0)
        OneRoot(a, b);
    else 
        NoRoot();

    return 0;
}

void TwoRoot(double a, double b, double disc)
{
    double x1, x2, p, q;
    p = -b / (2.0 * a);
    q = sqrt(disc) / (2.0 * a);
    x1 = p + q;
    x2 = p - q;
    printf("The equation has two roots: x1=%8.4lf x2=%8.4lf\n", x1, x2);
}

void OneRoot(double a, double b)
{
    double x;
    x = -b / (2.0 * a);
    printf("The equation has two equal roots: x=%8.4lf\n", x);

}

void NoRoot()
{
    printf("The equation hasn't real roots.\n");
}