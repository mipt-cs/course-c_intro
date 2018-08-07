#include <stdio.h>

// returns number of multipliers
// buffer A should be enough for x factors
int get_number_factors(int x, int A[])
{
    int top = 0;
    int divisor = 2;
    while (x != 1)
    {
        while (x%divisor == 0)
        {
            A[top] = divisor;
            top += 1;
            x /= divisor;
        }
        divisor += 1;
    }
    return top;
}

int main(int argc, char* argv[])
{
    int x;
    printf("Enter number to factorize:");
    scanf("%d", &x);
    int A[100];
    int N;
    N = get_number_factors(x, A);

    for(int i = 0; i < N; ++i)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}
