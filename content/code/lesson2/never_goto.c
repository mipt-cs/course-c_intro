#include <stdio.h>

int main(int argc, char* argv[])
{
    int x;

A:  scanf("%d", &x);
    if (x == 0) goto D;
B:  if (x%2 != 0) goto C;
    printf("Number %d is even.\n", x);
    goto A;
C:  printf("Number %d is odd.\n", x);
    goto A;
D:
    return 0;
}

