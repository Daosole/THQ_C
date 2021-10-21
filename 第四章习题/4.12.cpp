#include<stdio.h>
#include<math.h>
int main()
{
	int h; //高度
	float x,y,a,b,c,d; //四个等式
	printf("Enter x,y:");
	scanf("%f,%f",&x,&y);
	
	a = x*x + y*y - 4*x - 4*y + 7;
	b = x*x + y*y - 4*x + 4*y + 7;
	c = x*x + y*y + 4*x - 4*y + 7;
	d = x*x + y*y + 4*x + 4*y + 7;
	if( a > 1e-6 && b > 1e-6 && c >1e-6 && d > 1e-6)
		h = 0;
	else
		h = 10;
		
	printf("该点高度为h=%dm\n",h);
	return 0;
}