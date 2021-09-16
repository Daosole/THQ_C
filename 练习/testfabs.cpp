#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float tt;
	double a,b;
	printf("Please input a number\n");
	scanf("%lf,%f",&a,&tt);
	
	b = fabs(a);
	
	printf("fabs of a is %lf\n",b);
	printf("fabs of a is %f\n",tt);
	system("pause");
	return 0;
	
}