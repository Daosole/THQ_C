#include <stdio.h>
int main(void)
{
	int a[2][3] = { {1,2,3}, {4,5,6}};
	int b[3][2], i, j;
	printf("array A:\n");
	for (i = 0; i < 2; i++) //处理行 元素
	{
		for (j = 0; j < 3; j++) //处理列元素
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j]; //将 a 数组中的元素赋给数组 b 中的相应元素
		}
		printf("\n");
	}
	
	printf("array B:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}