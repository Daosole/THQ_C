#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 2, t = 1;
	while (i <= 5)
	{
		t = t*i;
		i = i+1;
	}
	printf("%d\n",t);
	system("pause");
	
	return 0;
}