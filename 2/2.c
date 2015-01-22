#include <stdio.h>
int main(void)
{
    unsigned int i = 0;
    unsigned int sum = 0;
    unsigned int fib = 0;
    unsigned int j = 1;
    unsigned int total = 0;

    while(fib < 4000000){
        if(fib % 2 == 0)
            sum += fib;
        fib = i + j;
        printf("%i\n", fib);
        i = j;
        j = fib;
    }
    printf("%lu\n", sum);
    return 0;
}


