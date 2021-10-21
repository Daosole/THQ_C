#include<stdio.h>
int main()
{
	int x,y;
	printf("please enter x value:");
	scanf("%d",&x);
	if(x<1)
		y = x;
	if( x >= 1 && x < 10)
		y = 2*x - 1;
	if(x >= 10)
		y = 3*x - 11;
		
	printf("y=%d",y);
	return 0;
}