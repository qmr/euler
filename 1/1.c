/* lazy unoptimized brute force */
#include <stdio.h>
int main(void)
{
    unsigned int i = 0;
    unsigned int j = 0;

    for(i = 0; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0)
           j += i;
    }
    printf("%i\n", j);
    return 0;
} 
