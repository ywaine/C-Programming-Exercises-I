#include <stdio.h>

void main()
{
    //create all prime numbers 
    //declare i to keep track of loop,
    int i;
    //declare array
    int primeNumbers[25];
    printf("PrimNumbers:\n");
    for (i = 0; i < 100; i++) {
        //conditional: if i/2 has a reminder it is a prime number
        // put them into an array
        if (i % 2 > 0) {
            primeNumbers[i] = i;
            printf("%d\n", i);
        }
    }

    printf("Smallest 20 Prime Numbers:\n");

    //use one variable to sort
    int hold = 999;
    int k;
    int j;
    for (k = 1; k < 10; k++) {
        for (j = 24; j > -1; j--) {
            if (primeNumbers[j] < hold) {
                hold = primeNumbers[i];
                printf("%d\n", primeNumbers[j]);
            }

        }
    }


}
