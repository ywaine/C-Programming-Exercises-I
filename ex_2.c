/*2. Print common multiples of 3 and 4 btw 0 to 100*/
#include <stdio.h>
//Adding comments
	//main method returns an integer value

int main()
{
	//declare i variable
	int i;
	//run for loop 99 times
	for (i = 1; i < 100; i++) {
		//conditional statement: if i/12 has no reminder
		if (i % 12 == 0) {
			printf("%d\n", i);
		}
	}
  return 0;
}
