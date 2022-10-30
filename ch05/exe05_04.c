#include <stdio.h>
#define CM_PER_INCH 2.54f
#define CM_PER_FEET 30.48f

int main(void)
{
    double cm,inch;
    int feet;

    printf("Please enter a number for height (<= 0 to quit): ");
    while ((scanf("%lf",&cm) == 1) && cm > 0)
    {
        feet = (int)(cm / CM_PER_FEET);
        inch = (cm - feet * CM_PER_FEET) / CM_PER_INCH;
        printf("%.1f cm = %d feet,%.1f inches\n",cm,feet,inch);
        printf("You can enter again (<= 0 quit): ");
    }
    printf("Done!\n");

    return 0;
}