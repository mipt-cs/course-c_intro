#include <stdio.h>

int main(int argc, char* argv[])
{
    int x;
    printf("Number to split on digits:");
    scanf("%d", &x);
    while (x)
    {
        int digit = x%10;
        if (digit < 5)
            printf("%d ", digit);
        x /= 10;
    }

    return 0;
}
