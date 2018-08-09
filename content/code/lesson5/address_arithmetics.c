#include <stdio.h>

int main(int argc, char* argv[])
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", *A);

    int *p = A + 5;
    printf("%d\n", p[-1]);

    int *q = A + 7;
    if (p > q)
        printf("p > q\n");
    else
        printf("p <= q\n");

    printf("p - q = %d", p-q);

    return 0;
}
