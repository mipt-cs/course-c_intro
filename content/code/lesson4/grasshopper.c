#include <stdio.h>

int number_of_trajectories(int n)
{
    int K[n+1];
    K[0] = 0;
    K[1] = 1;
    for (int i = 2; i <= n; ++i)
        K[i] = K[i-1] + K[i-2];
    return K[n];
}

int main(int argc, char* argv[])
{
    int finish;
    scanf("%d", &finish);
    printf("Grasshopper has %d trajectories from 1 to %d\n",
           number_of_trajectories(finish), finish);
    return 0;
}
