#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void foo(int *pointer)
{
    assert(pointer);
    *pointer = 0; //potential Segmentation fault
}

int main()
{
    int *p = NULL;  // Uninitialized pointer!
    //*p = 10; // Using it => Segmentation fault!

    //foo(p);  // Another use of uninitialized pointer => Segmentation fault!

    int x = 100;
    scanf("%d", x); // Very popular Segmentation fault.

    return 0;
}
