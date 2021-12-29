#include <stdio.h>
int main(void)
{
	int a[10];
	int i, j, t;
	printf("input 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]); //加取址符是因为具体的某个值 并不是数组的地址
	}
	
	printf("\n");
	
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9-j; i++) //进行 9 次循环，实现 9 趟比较
		{
			if (a[i] > a[i+1]){  // 相邻两个数比较
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	
	printf("The sorted numbers:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
	return 0;
}