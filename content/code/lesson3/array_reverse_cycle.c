#include <stdio.h>
#define N 10

void print_array(int A[])
{
    for(int i = 0; i < N; ++i)
        printf(" %d ", A[i]);
    printf("\n");
}

int main(int argc, char* argv[])
{
    int A[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int tmp;
    print_array(A);

    for(int i = 0; i < N/2; ++i)  // Reverse
    {
        tmp = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = tmp;
    }
    print_array(A);

    tmp = A[0];  // Cycle shift to the left
    for(int i = 0; i < N-1; ++i)
        A[i] = A[i+1];
    A[N-1] = tmp;
    print_array(A);

    tmp = A[N-1];  // Cycle shift to the right
    for(int i = N-1; i > 0; --i)
        A[i] = A[i-1];
    A[0] = tmp;
    print_array(A);

    return 0;
}
