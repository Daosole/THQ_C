#include<stdio.h>
int main()
{
	int c,s;
	float p,w,d,f;
	printf("please enter price,weight,distense:");
	scanf("%f,%f,%d",&p,&w,&s); // 输入单价 重量 距离
	if(s >= 3000) c = 12;
	else	c = s/250;
	switch(c)
	{
		case 0: d = 0; break; //c=0 代表 250km 以下 折扣 d=0
		case 1: d = 2; break;
		case 2: 
		case 3: d = 5; break; //c = 2/3 代表 500~1000km d=5%
		case 4:
		case 5:
		case 6: 
		case 7: d = 8; break;
		case 8: 
		case 9:
		case 10: 
		case 11: d = 10; break;
		case 12: d = 15; break;
	}
	
	f = p*w*s*(1-d/100);
	printf("freight=%10.2f\n",f);
	return 0;
}