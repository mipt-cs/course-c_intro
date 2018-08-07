#include <stdio.h>

void A();
void B();
void C();

int main(int argc, char* argv[])
{
    printf("main() called.\n");
    A();
    printf("main() returns.\n");

    return 0;
}

void A()
{
    printf("  A() called.\n");
    B();
    printf("  A() returns.\n");
}

void B()
{
    printf("    B() called.\n");
    C();
    printf("    B() returns.\n");
}

void C()
{
    printf("      C() called.\n");
    printf("      C() returns.\n");
}
