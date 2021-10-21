#include<stdio.h>
#define Pi 3.14

int main()
{
	float r,h,c,area,s,v1,v2; // c 周长 area 圆面积 s 圆球表面积 v1 球体积 v2 圆柱体体积
	printf("请输入半径和圆柱体的高\n");
	scanf("%f,%f",&r,&h);
	c = 2*Pi*r;
	area = Pi*r*r;
	s = 4*Pi*r*r;
	v1 = (4/3.0)*Pi*r*r*r;
	v2 = Pi*r*r*h;
	
	printf("圆周长=%.2f\n",c);
	printf("圆面积=%.2f\n",area);
	printf("圆球表面积=%.2f\n",s);
	printf("圆球体积=%.2f\n",v1);
	printf("圆柱体体积=%.2f\n",v2);
	
	return 0;
	
}