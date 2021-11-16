#include <stdio.h>
#include <math.h>

int main(void)
{
	float r = 0.09, n = 10, p, t;
	t = 1 + r;
	p = pow(t, n);
	printf("p=%f\n", p);

	getchar();
	return 0;
}