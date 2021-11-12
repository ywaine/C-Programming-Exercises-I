/*4. Print 7 times table*/
#include <stdio.h>
//main method
int main()
{
	int a, b;
	a = 1;b = 7 * a;
	for (int a = 1;a < 10; a++) {
		b = 7 * a;
		printf("7 * %d = %d\n", a, b);

	}
}

