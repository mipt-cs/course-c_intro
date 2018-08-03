#include <stdio.h>

int main(int argc, char* argv[])
{
    // int неявно приводится к unsigned int
    int x = -100;
    unsigned int y = 10U;
    long long int z = x + y;
    printf("z = %lld\n", z);

    // char явно приводится к типу int
    char c = 'Я';
    int d = (int)c * 10;
    printf("d = %d\n", d);

    return 0;
}
