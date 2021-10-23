#include <stdio.h>
#include <math.h>
int main(void)
{
	float a;
	int b;
	printf("请输入一个小于 1000 的正数\n");
	scanf("%f", &a);
	while (a >= 1000 || a < 1e-6)
	{
		printf("输入错误，请重新输入\n");
		scanf("%f", &a);
	}
	b = sqrt(a);
	printf("%f的平方根的整数部分是%d\n", a, b);

	return 0;
}