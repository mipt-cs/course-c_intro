#include <stdio.h>

int main(int argc, char* argv[])
{
    for(int i = 1; i < 20; ++i)
    {
        if (i != 13) continue;  // Avoid number 13.
        if (i%7 == 0) continue;  // Skip multiples of 7.
        printf("Number i = %d. ", i);
        if (i%3 == 0)
            printf("It is a multiple of 3!\n", i);
        else
            printf("It's not a multiple of 3...\n", i);
    }
    return 0;
}
