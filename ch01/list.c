#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a value for inches:");
    scanf("%d",&i);
    i = i * 2.54;
    printf("limi = %d",i);

    return 0;
}