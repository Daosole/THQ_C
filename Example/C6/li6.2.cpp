#include <stdio.h>
int main(void)
{
	int i;
	int f[20] = {1,1}; //对最前面的两个元素赋初值 1
	for (i = 2; i < 20; i++)
	{
		f[i] = f[i - 2] + f[i - 1]; //先后求出 f2 - f19 的值
	}
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0) // 控制每输出 5 个数字换行
			printf("\n");
			
		printf("%12d",f[i]); //输出每个数
	}
	printf("\n");
	return 0;
		
}
		
		