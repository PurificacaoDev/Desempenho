
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int n){
    for (int i = 2; i <= n/2; i++)
        if(!(n % i))
            return 0;
    return 1;
}

void main(){

    clock_t t;
    t = clock();

    int numPrimes = 0

    for (int i = 2; i < 250001; i++)
        numPrimes += isPrime(i);
}

printf("%d\n", numPrimes);
t = clock() - t;
printf("%ld -ms", (t)/((CLOKS_PER_SEC/1000)));