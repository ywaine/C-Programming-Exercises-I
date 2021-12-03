/*6. Print the month where 1st is on wed and 31st is the last day*/
#include <stdio.h>

int main()
{
	int d, rmd;

	printf(" Mo Tu We Th Fr Sa Su\n");

	for (d = 1; d < 32; ++d) {
		if (d==1)
		{
			printf("        1");
		}
		else if (d == 5) {
			printf(" %2d\n", d);
		}
		else if (d % 7 == 5) {
			printf(" %2d\n", d);
		}
		else {
			printf(" %2d", d);
		}
	}
	return 0;
}