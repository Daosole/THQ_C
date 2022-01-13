// 用 switch 语句处理菜单命令
#include <stdio.h>
int main(void)
{
	void action1(int, int), action2(int, int);
	char ch;
	int a = 15, b = 23;
	ch = getchar();
	switch (ch)
	{
	case 'a':
	case 'A':
		action1(a, b);
		break; //调用 action1 函数 执行 A 操作
	case 'b':
	case 'B':
		action2(a, b);
		break; //调用 action2 函数 执行 B 操作
	default:
		putchar('\a'); // 如果输入其他字符，发出警告
	}
	return 0;
}

void action1(int x, int y) //执行加法的函数
{
	printf("x+y=%d\n", x + y);
}

void action2(int x, int y) //执行乘法的函数
{
	printf("x*y=%d\n", x * y);
}