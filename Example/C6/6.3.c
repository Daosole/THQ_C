#include <stdio.h>
int main(void)
{
	int a[3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("array a : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("\n");
	
	printf("sum = %d\n", sum);
	return 0;
}