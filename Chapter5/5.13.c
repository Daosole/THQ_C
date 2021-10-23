//使用迭代法求平方根
#include<stdio.h>
#include<math.h>
int main(void)
{
	float x,x0,a;
//	double n;
	printf("Enter the a value:");
	scanf("%f",&a);
	x0 = a/2; //赋初值
	x = (x0 + a/x0)/2;  // 循环之前先进行一次
	do
	{
		x0 = x;
		x = (x0 + a/x0)/2;
	} while(fabs(x-x0) > 1e-5);
	
//	printf("%f",fabs(i-j));
	printf("%f",x);
	
	return 0;
	
}