#include <stdio.h>
#define PINT_PER_CUP 2
#define CUP_PER_OUNCE 8
#define BIGSPOON_PER_OUNCE 2
#define TEASPOON_PER_BIGSPOON 3
int main(void)
{
    double pint,ounce,cup,bigspoon,teaspoon;

    printf("Please enter a number of cups: ");
    scanf("%lf",&cup);
    pint = cup / PINT_PER_CUP;
    bigspoon = ounce * BIGSPOON_PER_OUNCE;
    teaspoon = bigspoon * TEASPOON_PER_BIGSPOON;
    printf("Here are some ways to show %g cups.\n",cup);
    printf("Pint: %g.\n",pint);
    printf("Ounce: %g.\n",ounce);
    printf("Bigspoon %g.\n",bigspoon);
    printf("Teaspoon: %g.\n",teaspoon);

    return 0;
}