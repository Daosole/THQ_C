#include<stdio.h>
#include<math.h>
int main()
{
	float m,d,p,r; //m �������� d ���� p ÿ�»���� r ������
	d = 300000.0, p = 6000.0, r = 0.01;
	float a,b; // �м����
	a = log(p / (p - d*r) );
	b = log(1 + r);
	m = a / b;
	printf("m = %.1f\n",m);
	
	return 0;
}