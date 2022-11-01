#include <stdio.h>
#define N 8

int main(void)
{
    int a[N],i;
    int val = 2;

    for (i = 0; i < N; i++)
    {
        a[N] = val;
        val *= 2;
    }
    i = 0;
    printf("Here are the results for array:\n",N);
    do
    {
        printf("%d",a[i++]);
    } while (i < N);
    printf("\nDone.\n");

    return 0;
    
}