#include <stdio.h>

int main()
{
	int i;
	for (i = 1; i < 100; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
		if (i % 4 == 0) {
			printf("%d\n", i);
		}
	}
}
