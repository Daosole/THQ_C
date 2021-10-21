#include<stdio.h>
int main()
{
	char grade;
	float a;
	printf("请输入成绩:");
	scanf("%f",&a);
	while( a > 100 || a < 0)
	{
		printf("输入有误，请重新输入:");
		scanf("%f",&a);
	}
	if (a >= 90 && a <= 100)
		grade = 'A';
	if (a >= 80 && a <= 89)
		grade = 'B';
	if (a >= 70 && a <= 79)
		grade = 'C';
	if( a >= 60 && a <= 69)
		grade = 'D';
	if( a < 60)
		grade = 'E';
		
	printf("%c\n",grade);
	return 0;
		
	
}