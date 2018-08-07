#include <stdio.h>
#define N 25

int main(int argc, char* argv[])
{
    int sieve[N] = {0};

    for(int i = 2; i*i < N; ++i)
        if (sieve[i] == 0)
            for(int k = i*i; k < N; k += i)
                sieve[k] = 1;

    for(int i = 0; i < N; ++i)
        printf("%3d", i);
    printf("\n");
    for(int i = 0; i < N; ++i)
        printf("%3d", sieve[i]);
    printf("\n");

    printf("Prime numbers:\n");
    for(int i = 2; i < N; ++i)
        if (sieve[i] == 0)
            printf("%3d", i);
    printf("\n");

    return 0;
}
