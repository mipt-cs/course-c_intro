#include <stdio.h>

int factorial(int n)
{
    if (0 == n)
        return 1;
    return factorial(n-1)*n;
}

int gcd(int a, int b)
{
    if (0 == b) return a;
    return gcd(b, a%b);
}

double fast_power(double a, int n)
{
    if (0 == n) return 1;
    if (n%2 == 1)
        return a*fast_power(a, n-1);
    else
        return fast_power(a*a, n/2);
}

int fib(int n)
{
    if (n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}

int main(int argc, char* argv[])
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("factorial(%d) = %d\n", n, factorial(n));
    printf("gcd(%d, %d) = %d\n", n, m, gcd(n, m));
    printf("fast_power(%d, %d) = %lf\n", n, m, fast_power(n, m));
    printf("fib(%d) = %d\n", n, fib(n));

    return 0;
}

