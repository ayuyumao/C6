#include <stdio.h>

void cube(double n);

int main(void)
{
    double n;

    printf("Please enter a double number: ");
    scanf("%lf",&n);
    cube(n);

    return 0;
}

void cube(double n)
{
    printf("The cube of %f is %f.\n",n,n*n*n);
}