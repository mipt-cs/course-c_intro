#include <stdio.h>

int main(int argc, char* argv[])
{
    int x, i = 0;
    int m = -1000000, m_i = -1;
    scanf("%d", &x);
    while (x != 0)  // Zero - terminator of succession.
    {
        if (x%2 == 0)
            if (x > m)
            {
                m = x;
                m_i = i;
            }
        i += 1;
        scanf("%d", &x);
    }
    printf("maximum = %d\n"
           "maximum position= %d\n", m, m_i);

    return 0;
}
