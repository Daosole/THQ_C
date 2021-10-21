#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sign = 1;
	double deno = 2.0, sum = 1.0, term; //定义 deno sum term 为双精度型变量
	while ( deno <= 100) //分母小于等于 100
	{
		sign = -sign; // 符号的改变
		term = sign/deno; //分式
		sum = sum + term; //求和
		deno = deno + 1;
		
	}
	
	printf("%f\n",sum);
	
	system("pause");
	return 0;
}