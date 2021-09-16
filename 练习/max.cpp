#include<stdio.h>
#include<stdlib.h>

int main()
{
	int max(int x, int y); //函数声明
	int a,b,c;
	printf("Please input two numbers\n");
	scanf("%d,%d",&a,&b);
	c = max(a,b);
	printf("max = %d\n",c);
	
	system("pause");
	return 0;
}

// 求两个数中的最大数的函数
int max(int x, int y) //函数定义后没有分号
{
	int z;
	int q;
	if( x > y)
	z = x;
	else
	z = y;
	
	q = q * z
	return (z);
}