#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,sum;
	printf("please input two numbers to compute their sum\n");
	scanf("%d %d",&a,&b); /*获取输入值 */
	sum = a + b;
	printf("sum is %d\n",sum);
	
	system("pause");
	return 0;
}