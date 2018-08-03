#include <stdio.h>

int main(int argc, char* argv[])
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (y > 0)
        if (x > 0)
            printf("1-st quarter.\n");
        else
            printf("2-nd quarter.\n");
    else
        if (x < 0)
            printf("3-rd quarter.\n");
        else
            printf("4-th quarter.\n");

    return 0;
}
