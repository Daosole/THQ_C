#include<stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d",&a);
	b = a;
	i = 0;
	printf("\n");
	for(i = 0; b !=0 ; i++)
	{
		c = b%10;
		b = b/10;
		printf("%d\n",c);
		
	}
	printf("\n");

	printf("这是个%d位数\n",i);
	printf("a=%d,%d,%d",a,b,c);
	return 0;
	
}