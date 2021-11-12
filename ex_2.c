#include <stdio.h>
//Adding comments
	//main method returns an integer value

int main()
{
	//declare i variable
	int i;
	//run for loop 99 times
	for (i = 1; i < 100; i++) {
		//conditional statement: if i/3 has no reminder
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
		//conditional statement: if i/4 has no reminder
		if (i % 4 == 0) {
			printf("%d\n", i);
		}
	}
}
