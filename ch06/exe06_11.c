#include <stdio.h>
#define N 8

int main(void)
{
    int i,a[N];

    printf("Please enter 8 numbers:\n",N);
    for (i = 0;i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse order printing 8 numbers:\n",N);
    for (i = N - 1; i >= 0; i--)
    {
        printf("%-3d",a[i]);
    }

    return 0;
}