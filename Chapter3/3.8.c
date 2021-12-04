#include <stdio.h>

int main(void)
{
	char c1, c2;
	int c3, c4;
	printf("请输入两个整数\n");
	scanf("%d %d", &c3, &c4);
	c1 = c3;
	c2 = c4;
	printf("输出字符结果 %c,%c\n", c1, c2);
	printf("输出 ASCII 码 %d,%d\n", c1, c2);

	return 0;
}