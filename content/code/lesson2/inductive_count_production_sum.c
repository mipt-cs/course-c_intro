#include <stdio.h>

int main(int argc, char* argv[])
{
    int x;
    scanf("%d", &x);

    int n = 0, s = 0, p = 1;
    while (x)
    {
        int digit = x%10;
        n += 1;
        s += digit;
        p *= digit;
        x /= 10;
    }
    printf("number = %d\n"
           "sum = %d\n"
           "production = %d\n", n, s, p);

    return 0;
}
