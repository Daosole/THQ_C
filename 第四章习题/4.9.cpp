#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个小于 100000 的正整数\n");
	scanf("%d",&a);
	while(a >= 100000 || a < 0 )
	{
		printf("s重新输入\n");
		scanf("%d",&a);
	}
	printf("%d",a);
	return 0;
}