#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("请输入一个小于 1000 的正数\n");
	scanf("%d",&a);
	while(a >= 1000 || a < 0)
	{
		printf("输入错误，请重新输入\n");
		scanf("%d",&a);
	}
	b = sqrt(a);
	printf("%d的平方根的整数部分是%d\n",a,b);
	
	return 0;
	
}