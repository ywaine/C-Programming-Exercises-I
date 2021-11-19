#include <stdio.h>
//Adding comments
	//main method returns an integer value

int main()
{
	//declare i for first loop, j for second loop, ans to construct the final result
	int i;
	int j;
	int ans;
	//nested for loop to print ten different set of successive numbers on ten different rows
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			ans = j * 10 + i;
			printf("%d ", ans);
		}
		//new line
		printf("\n");
	}
}
