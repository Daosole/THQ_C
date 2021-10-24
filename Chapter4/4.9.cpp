#include <stdio.h>
int main(void)
{
	int a[5], b, c, i;
	printf("请输入一个多于 5 位的正整数:");
	scanf("%d", &b);
	while (b > 99999 || b < 0)
	{
		printf("Error,input again\n");
		scanf("%d", &b);
	}
	int d1, d2, d3, d4, d5; // 万 千 百 十 个
	d1 = b / 10000;
	d2 = (b - d1 * 10000) / 1000;
	d3 = (b - d1 * 10000 - d2 * 1000) / 100;
	d4 = (b - d1 * 10000 - d2 * 1000 - d3 * 100) / 10;
	d5 = b % 10;
	printf("逆序输出:\n");
	for (i = 0; b != 0; i++)
	{
		c = b % 10;
		b = b / 10;
		printf("%d\n", c);
	}

	printf("这是个%d位数\n", i);

	switch (i)
	{
	case 5:
		printf("%d %d %d %d %d", d1, d2, d3, d4, d5);
		break;
	case 4:
		printf("%d %d %d %d ", d2, d3, d4, d5);
		break;
	case 3:
		printf("%d %d %d ", d3, d4, d5);
		break;
	case 2:
		printf("%d %d", d4, d5);
		break;
	case 1:
		printf("%d ", d5);
		break;
	}

	printf("\n");
	return 0;
}