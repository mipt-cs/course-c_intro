#include <stdio.h>
#define N 10

void print_array(int A[])
{
    for(int i = 0; i < N; ++i)
        printf("%3d ", A[i]);
    printf("\n");
}

int main(int argc, char* argv[])
{
    int A[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int B[N] = {0};

    for(int i = 0; i < N; ++i)
        B[i] = A[i];
    print_array(A);
    print_array(B);
    printf("\n");

    for(int i = 0; i < N; ++i)
        B[i] = A[N-1-i];
    print_array(A);
    print_array(B);

    return 0;
}
