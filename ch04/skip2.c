#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last integer was %d",n);

    return 0;
}