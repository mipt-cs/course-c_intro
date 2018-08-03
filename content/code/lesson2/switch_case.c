#include <stdio.h>

int main(int argc, char* argv[])
{
    int x;
    scanf("%d", &x);

    switch (x)
    {
    case 1: printf("One!\n"); break;
    case 2: printf("Two!\n"); break;
    case 3: printf("Three!\n"); break;
    case 0: printf("Zero!\n"); break;
    default: printf("Don't know this number...");
    };

    return 0;
}

