#include<stdio.h>
int main(void)
{
    int n,a,b,c,i; //a b c 为各位数
    for( n = 100; n < 1000; n++)
    {
    	i = n;
		while(i != 0)
    	{
	    	a = i % 10; // 个位
	    	i = i / 10;
	    	b = i % 10; // 十位
	    	i = i / 10;
	    	c = i % 10; // 百位
	    	i = i / 10; 
		}
		if(n == a*a*a + b*b*b + c*c*c)
			printf("%d\n",n);
    }
    
    return 0;
}
