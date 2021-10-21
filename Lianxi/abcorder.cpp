#include<stdio.h>
#include<stdlib.h>

int main()
{
//	int max(int x, int y);
//	int a,b,c;
//	int max1;
//	printf("please input three numbers\n");
//	scanf("%d,%d,%d",&a,&b,&c);
//	max1 = max(a,b);
//	a = max(max1,c);
//	b = max(b,c);
//	printf("the order is %d,%d,%d",a,b,c);
	int a,b,c,t;
	if (a > b)
	t = a;
	else t = b;
	
	if ( t > c)
	a = t;
	else a = c;
	
	if ( b > c)
		pinrf("%d,%d,%d",a,b,c)
	else 
		printf("%d,%d,%d",a,c,b)
	
	system("pause");
	return 0;
	
}

int max(int x, int y)
{
	int z;
	if (x > y)
	z = x;
	else 
	z = y;
	return z;
}