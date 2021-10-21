#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a,b,c,m;
	printf("请输入三个整数\n");
	scanf("%d,%d,%d",&a,&b,&c);
	m = max(a,b); //m 为 a b 中的较大值
	m = max(m,c); //m 为 m 与 c 中的较大值
	printf("max=%d\n",m);
	
	return 0;
	
}

int max(int x, int y)
{
	int z;
	if ( x > y)
		z = x;
	else z = y;
	
	return z;
}