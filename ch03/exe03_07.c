#include <stdio.h>
#define CM_PER_INCH 2.54

int main(void)
{
    double inch, cm;

    printf("Please enter your height(inch): ");
    scanf("%lf",&inch);
    cm = inch * CM_PER_INCH;
    printf("your height is %e cm.\n",cm);

    return 0;
}