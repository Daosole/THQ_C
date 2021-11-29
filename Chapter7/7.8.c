#include <stdio.h>
#include <string.h>
int main(void)
{
	void np(int x);
	int num;
	printf("Please input 4 digit numbers:\n");
	scanf("%d", &num);
	while (num > 10000 || num < 1000)
	{
		printf("error! Please input again!\n");
		scanf("%d", &num);
	}

	np(num);

	return 0;
}
void np(int x)
{
	int i, j;
	char arr[8];
	arr[7] = '\0';
	for (i = 6; i >= 0; i--)
	{
		if (i % 2 == 0)
		{

			if (x != 0)
			{
				j = x % 10;
				x = x / 10;
				j = j + '0'; // 将数字变成字符
				arr[i] = j;
			}
		}
		else
			arr[i] = ' ';
	}
	puts(arr);
}