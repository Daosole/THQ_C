#include <stdio.h>
int main(void)
{
	int a[3][3];
	int i, j;
	for (i = 0; i < 3; i++) //初始化数组
	{
		for ( j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("array a : \n");
	for (i = 0; i < 3; i++) // 输出数组
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < 3; i++) // 计算主对角线的和
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
			}
            if ( i + j == 2)
            {
                sum2 = sum2 + a[i][j];
            }
            
		}
	}
	printf("\n");
	
	printf("主对角线和 = %d\n副对角线和 = %d", sum1, sum2);
	return 0;
}