/*Print common multiples of 3 and 4 btw 0 to 100*/
#include <stdio.h>

int main()
{
	for (int z = 0;z <= 100; z++) {
		if (z % 12 == 0) {
			printf("%d\n", z);
		}
	}
	return 0;
}

