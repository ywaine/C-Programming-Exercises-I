/*1. Print even no btw 0 to 100*/

#include <stdio.h>
//Adding comments
	//main method returns an integer value

int main() {
	//declare i variable
	int i;
	//run for loop 99 times
	for (i = 1; i < 100; i++)
	{
		//conditional if i divided by 2 has no reminder then - 
		if (i % 2 == 0) {
			//- print i on a new line
			printf("%d\n", i);

		}
	}
	return 0;
}
