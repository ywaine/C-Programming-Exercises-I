/*5. Find the number which is a 5digit number (10,000 - 99,999) which is satisfies that (100,000 + a)*3 = a*10 + 1*/
#include <stdio.h>
#include <string>

unsigned concatenate(unsigned x, unsigned y) {
	unsigned pow = 10;
	while (y >= pow)
		pow *= 10;
	return x * pow + y;
}

int main()
{
	for (int a = 10000, b = 0;a < 99999; a++) {
		int d = a * 3; //3 times a
		if (concatenate(a, 1) == concatenate(1, a) * 3)
		{
			printf("The number : ", a);
			printf("%d", a);
		
		}

	}
}
