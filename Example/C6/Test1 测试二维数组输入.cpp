#include <stdio.h>
int main(void)
{
	int a[3][4], i, j, max;
	int row = 0, colum = 0;
	printf("输入一个 3*4 的矩阵:\n");
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
//		printf("\n");
	}
	
	printf("array a : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	
	max = a[0][0]; // 认为 a[0][0] 最大
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] > max) // 如果某元素大于 max，取代 max 的原值
			{
				max = a[i][j];
				row = i; // 记下 max 的行号和列号
				colum = j;
			}
		}
	}
	
	printf("max = %d\nrow = %d\ncolum = %d\n", max, row, colum);
	return 0;
}