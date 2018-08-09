#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;
    int ***pppi = &ppi;

    printf("%d\n", i);
    *pi = 20;
    printf("%d\n", i);
    **ppi = 30;
    printf("%d\n", i);
    ***pppi = 40;
    printf("%d\n", i);

    return 0;
}

