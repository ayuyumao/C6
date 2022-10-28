#include <stdio.h>

int main(void)
{
    int value;

    printf("Please enter a value: ");
    scanf("%d",&value);
    printf("The code for %c is %d",value,value);
    return 0;
}