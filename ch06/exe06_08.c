#include <stdio.h>

int main(void)
{
    double i,j;

    printf("Please enter two numbers (q to quit): ");
    while (scanf("%lf %lf",&i,&j) == 2)
    {
        printf("(%g - %g) / (%g * %g)",i,j,i,j);
        printf(" = %g\n",(i - j) / (i * j));
        printf("You can enter again (q to quit): ");
    }
    printf("Done.\n");

    return 0;
}