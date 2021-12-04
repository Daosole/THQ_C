#include <stdio.h>
#include <math.h>
int main(void)
{
	float m, d, p, r; //m 还清月数 d 贷款 p 每月还款额 r 月利率
	d = 300000.0, p = 6000.0, r = 0.01;
	float a, b; // 中间变量
	a = log(p / (p - d * r));
	b = log(1 + r);
	m = a / b;
	printf("m = %.1f\n", m);

	return 0;
}