#include <stdio.h>

void hanoi(int n, int i, int k);

int main(int argc, char* argv[])
{
    hanoi(3, 1, 2);

    return 0;
}

void hanoi(int n, int i, int k)
{
    if (n == 1)
        printf("Move disk 1 from pin %d to %d.\n", i, k);
    else
    {
        int tmp = 6 - i - k;
        hanoi(n-1, i, tmp);
        printf("Move disk %d from pin %d to %d.\n", n, i, k);
        hanoi(n-1, tmp, k);
    }
}


