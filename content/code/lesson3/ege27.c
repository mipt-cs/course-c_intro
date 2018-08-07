#include <stdio.h>

int main()
{
    int N, k26 = 0, k13 = 0, k2 = 0, k1 = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        if (x%26 == 0)
            k26++;
        else if (x%13 == 0)
            k13++;
        else if (x%2 == 0)
            k2++;
        else
            k1++;
    }

    int m = k26*(k26-1)/2 + k26*(k1+k2+k13) + k2*k13;
    printf("%d\n", m);

    return 0;
}
