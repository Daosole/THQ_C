// 要求按照考试成绩的等级输出百分制分数段
#include <stdio.h>
int main(void)
{
	char grade;
	scanf("%c", &grade);
	printf("Your score:");
	switch (grade)
	{
	case 'A':
		printf("85~100\n");
		break;
	case 'B':
		printf("70~84\n");
		break;
	case 'C':
		printf("60~69\n");
		break;
	case 'D':
		printf("<60\n");
		break;
	default:
		printf("enter date error!\n");
	}

	return 0;
}