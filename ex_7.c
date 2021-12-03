/*7. Print all prime numbers btw 0 and 100*/
#include <stdio.h>

void main()
{
	for (int i = 1; i < 100; i++)
	{

		for (int j = 2; j <= i; j++)   // Changed upper bound
		{
			if (i == j)  // Changed condition and reversed order of if:s

				printf("%d\n", i);

			else if (i % j == 0)
				//printf("");
				break;
		}
	}
}
