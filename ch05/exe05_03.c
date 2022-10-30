#include <stdio.h>
#define DAYS_PER_WEEK 7

int main(void)
{
    int input;
    int week,days;

    printf("Please enter a number for days (<= 0 to quit): ");
    while ((scanf("%d",&input) == 1) && input > 0)
    {
        week = input / DAYS_PER_WEEK;
        days = input % DAYS_PER_WEEK;
        printf("%d days = %d week and %d days.\n",input,week,days);
        printf("You can enter again (<= 0 quit): ");
    }
    printf("Done!\n");

    return 0;
}