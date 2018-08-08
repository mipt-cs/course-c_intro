#include <stdio.h>
#include <time.h>

static int cache[100] = {0};

int fib(int n)
{
    if (n <= 1) return n;
    if (cache[n] == 0)
        cache[n] = fib(n-1) + fib(n-2);
    return cache[n];
}

int fib_dynamic(int n)
{
    int Fib[n+1];
    Fib[0] = 0;
    Fib[1] = 1;
    for (int i = 2; i <= n; ++i)
        Fib[i] = Fib[i-1] + Fib[i-2];
    return Fib[n];
}

int main(int argc, char* argv[])
{
    for (int n = 1; n < 50; n += 1)
    {
        clock_t time1 = clock();
        int result = fib_dynamic(n);
        clock_t time2 = clock();
        int delta_ms = (time2 - time1)*1000/CLOCKS_PER_SEC;
        printf("fib(%d) = %d,\t time = %d ms\n",
               n, result, delta_ms);
    }

    return 0;
}

