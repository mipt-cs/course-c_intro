#include <stdio.h>

void matryoshka(int n);

int main(int argc, char* argv[])
{
    matryoshka(7);

    return 0;
}

void matryoshka(int n)
{
    if (n == 1)
        printf(" Last matryoshka!!! %d\n", n);
    else
    {
        printf(" Top side of matryoshka %d\n", n);
        matryoshka(n-1);
        printf(" Bottom side of matryoshka %d\n", n);
    }
}
