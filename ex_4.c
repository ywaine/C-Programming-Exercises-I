/*4. Print 7 times table*/
#include <stdio.h>

int main()
{
	int a, b, c;
	a = 1;
	c = 7 * a;
	for (int a = 1;a < 10; a++) {
		c = 7 * a;
		printf("7 * %d = %d\n", a, c);
	}
}

