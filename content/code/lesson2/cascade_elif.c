#include <stdio.h>
#include <iso646.h>

int main(int argc, char* argv[])
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (y > 0 and x > 0)
        printf("1-st quarter.\n");
    else if (y > 0 and x < 0)
        printf("2-nd quarter.\n");
    else if (y < 0 and x < 0)
        printf("3-rd quarter.\n");
    else if (y < 0 and x > 0)
        printf("4-th quarter.\n");
    else
        printf("Point is on axis.\n");

    return 0;
}
