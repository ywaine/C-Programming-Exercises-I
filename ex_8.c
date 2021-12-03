/*8. Print only the 20 smallest prime numbers*/
#include <stdio.h>

void main()
{
	for (int i = 1, c = 0 ; i < 100; i++)
	{
		//int c = 0;

		for (int j = 2; j <= i; j++)   // Changed upper bound
		{
			if (i == j && c < 20) {  // Changed condition and reversed order of if:s
				c = c + 1;
				printf("%d\n", i);
			}
			else if (i % j == 0) {
				//printf("");
				break;
			}
		}
	}
}
