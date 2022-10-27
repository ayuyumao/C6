#include <stdio.h>

int main(void)
{
    int age,days;
    days = 365;
    printf("Enter your age:");
    scanf("%d",&age);
    days = age * days;
    printf("Your age: %d days: %d",age,days);

    return 0;

}