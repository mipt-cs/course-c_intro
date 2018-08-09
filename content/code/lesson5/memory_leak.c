#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Danger function: it's not responsible for
// the memory it allocates for the duplicate!
int* duplicate_array(int *A, size_t N)
{
    int * B = (int *) malloc(sizeof(int)*N);
    for(size_t i = 0; i < N; i++)
        B[i] = A[i];
    printf(" duplicate_array() allocated memory for the duplicate.\n");
    return B;
}

int main()
{
    printf("Calling irresponsible function duplicate_array():\n");
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *B = duplicate_array(A, 10);
    for (int i = 0; i < 10; ++i)
        printf("%d\t", B[i]);

    printf("Since caller function is not taking responsibility by itself,\n");
    printf(" memory for the array above will never be released...\n\n");

    printf("The same situation for the standard function strdup():\n");
    char *hello = "Hello, World!";
    char *message = strdup(hello);
    printf("Strdup allocated memory for this message: \"%s\"\n", message);
    printf("It'll never be released...\n\n");

    int *p;
    for (int i = 0; i < 10; i++)
    {
        p = (int *)malloc(sizeof(int));
        printf("Allocating memory many times in cycle.\n");
        *p = i;
    }
    free(p);
    printf("But releasing it just once...\n");

    return 0;
}
