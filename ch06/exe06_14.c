#include <stdio.h>
#define N 8

int main(void)
{
    int i;
    double a[N], b[N];

    printf("Please enter %d numbers:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%lf", &a[i]);
    }
    b[0] = a[0];
    for (i = 1; i < N; i++)
    {
        b[i] = a[i] + b[i - 1];
    }
    printf("Here are the results for array a:\n");
    for (i = 0; i < N; i++)
    {
        printf("%-3g", a[i]);
    }
    printf("\nHere are the results for array b:\n");
    for (i = 0; i < N; i++)
    {
        printf("%-3g", b[i]);
    }
    printf("\nDone.\n");

    return 0;
}