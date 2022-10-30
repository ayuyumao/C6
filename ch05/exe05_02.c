#include <stdio.h>
#define LEN 10

int main(void)
{
    int lower,upper;

    printf("Please enter a number: ");
    scanf("%d",&lower);
    upper = lower + LEN;
    while (lower <= upper)
    {
        printf("%4d",lower);
        lower++;
    }
    printf("\n");
    
    return 0;
}