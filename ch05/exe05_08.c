#include <stdio.h>

int main(void)
{
    int a,b;

    printf("This program computes a % b.\n");
    printf("Enter an integer for b: ");
    scanf("%d",&b);
    printf("Now enter an integer for a(<= 0 to quit): ");
    while ((scanf("%d",&a) == 1) && a > 0 )
    {
        printf("%d %% %d is %d\n",a,b,a % b);
        printf("Enter an integer for next a (<= 0 to quit): ");
    }
    printf("Done!\n");
    return 0;
}