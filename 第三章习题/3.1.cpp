#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float r = 0.09,n = 10,p,t;
	t = 1 + r;
	p = pow(t,n);
	printf("p=%f\n",p);
	
//	system("pause");
	getchar();
	return 0;
}