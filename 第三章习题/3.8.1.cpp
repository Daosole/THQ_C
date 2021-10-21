#include<stdio.h>

int main()
{
//	char c1,c2;
	int c1,c2; 
	printf("请输入两个字符\n");
	c1 = getchar();
	c2 = getchar();
	printf("使用 putchar 输出");
	putchar(c1);
	putchar(c2);
	putchar('\n');
	
	printf("使用 printf 输出\n");
	printf("输出 ASCII 码 %d,%d\n",c1,c2);
	
	return 0;
}