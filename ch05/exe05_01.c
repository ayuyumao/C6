#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void)
{
    int input;
    int min,hour;

    printf("Please enter a number for minute (<= 0 to quit): ");
    while ((scanf("%d",&input) == 1) && input > 0)
    {
        hour = input / MIN_PER_HOUR;
        min = input % MIN_PER_HOUR;
        printf("%d minutes = %d hours and %d minutes.\n",input,hour,min);
        printf("You can enter again (<= 0 quit): ");
    }
    printf("Done!\n");

    return 0;
}