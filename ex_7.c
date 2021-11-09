#include <stdio.h>
//void method returns no value
void main()
{
    int i;
    for (i = 0; i < 100; i++) {
        //conditional: if i/2 has a reminder it is a prime number
        if (i % 2 > 0) {
            
            printf("%d\n", i);

        }
    }

}
