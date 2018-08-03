#include <stdio.h>

int main(int argc, char* argv[])
{
    int x = 1;
    scanf("%d", &x);
    while (x != 0)
    {
        if (x%2 == 0)
            printf("Number %d is even.\n", x);
        else
            printf("Number %d is odd.\n", x);
        scanf("%d", &x);
    }

    return 0;
}
