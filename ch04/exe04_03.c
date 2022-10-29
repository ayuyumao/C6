#include <stdio.h>

int main(void)
{
    float num;

    printf("Please enter a float number: ");
    scanf("%f",&num);
    printf("The input is %.1e or %.3e\n",num,num);

    return 0;
}