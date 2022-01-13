// 输入一个字母，判别它是否是大写字母，如果是，将它转换成小写字母，如果不是，不转换
#include <stdio.h>
int main(void)
{
	char ch;
	scanf("%c", &ch);
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
	printf("%c\n", ch);
	return 0;
}