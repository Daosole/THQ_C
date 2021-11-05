#include <stdio.h>
int main(void)
{
	char A, B, C;
	char i, j, k;
	for (i = 'X'; i <= 'Z'; i++) //i 作为 A 的对手
	{
		for (j = 'X'; j <= 'Z'; j++ ) // j 作为 B 的对手
		{
			if ( i != j ) // 对手不能相同 
				for (k = 'X'; k <= 'Z'; k++) // 在 i ！= j 的情况下 k 是 C 的对手
				{
					if (i != k && j != k){ 
						
						if (i != 'X' && k != 'X' && k != 'Z'){
							A = i;
							B = j;
							C = k;
						}
							
					}
					
				}
		}
	}
	
	printf("A = %c\nB = %c\nC = %c\n", A, B, C);
	
	return 0;
}