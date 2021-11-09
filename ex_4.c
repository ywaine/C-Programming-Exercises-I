#include <stdio.h>
//main method
int main()
{
	//declared variable i to track loops, ans to display the final answer
	int i;
	int ans;
	//loop runs 9 times
	for (i = 1; i < 10; i++) {
		//compute answer
		ans = 7 * i;
		printf("\n7 x %d = %d", i, ans);
		//set ans to 0
		ans = 0;
	}
}
