#include <stdio.h>
int main(void)
{
	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
	c1 = c1 + 4;
	c2 = c2 + 4;
	c3 = c3 + 4;
	c4 = c4 + 4;
	c5 = c5 + 4;

	putchar(c1); //使用 putchar 输出
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');

	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5); //使用 printf 输出

	return 0;
}