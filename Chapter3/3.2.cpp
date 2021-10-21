#include<stdio.h>
#include<math.h>
int main()
{
	float p1,p2,p3,p4,p5; //五种方式的本息和
	float r1=0.0414,r2=0.0468,r3=0.054,r5=0.0585,rh=0.0072; //五种年利率
	float n = 5;
	
	p1 = 1000*(1+n*r5);
	p2 = (1000*(1+2*r2))*(1+3*r3);
	p3 = (1000*(1+3*r3))*(1+2*r2);
	p4 = 1000*pow(1+r1,n);
	p5 = 1000*pow(1+(rh/4),4*n);
	
	printf("p1=%f\n",p1); //第一种方案
	printf("p2=%f\n",p2); //第二种方案
	printf("p3=%f\n",p3); //第三种方案
	printf("p4=%f\n",p4); //第四种方案
	printf("p5=%f\n",p5); //第五种方案
	
	return 0;
}