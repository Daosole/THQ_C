#include<stdio.h>
#include<stdbool.h>
int main()
{
	int year;
	bool leap; //定义 leap 为逻辑变量
	printf("enter year:");
	scanf("%d",&year);
	if ( year%4 == 0 )
	{
		if (year%100 == 0)
		{
			if (year%400 == 0)
				leap = true;
			else
				leap = false;
		}
		else
			leap = true;
	}
	else
		leap = false;
		
	if(leap == true)
		printf("%d is ",year);
	else
		printf("%d is not ",year);
	printf("a leap year.\n");
	return 0;
}