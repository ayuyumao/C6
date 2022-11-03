#include <stdio.h>
#define PLAN1 17850
#define PLAN2 23900
#define PLAN3 29750
#define PLAN4 14875
#define RATE1 0.15
#define RATE2 0.28

int main(void)
{
    int n;
    double wage, tax;

    while (1)
    {
        printf("********************************\n");
        printf("1) single\n");
        printf("2) householder\n");
        printf("3) married\n");
        printf("4) married but divorced\n");
        printf("5) quit\n");
        printf("********************************\n");
        printf("Please you choose: ");
        while (scanf("%d", &n) != 1 || (n > 5 || n < 1))
        {
            while (getchar() != '\n')
                continue;
            printf("Please enter 1, 2, 3, 4 or 5: ");
        }
        if (n != 5)
        {
            printf("Please enter your wage: ");
            scanf("%lf", &wage);
        }
        if (1 == n)
        {
            if (wage <= PLAN1)
            {
                tax = wage * RATE1;
            }
            else
            {
                tax = PLAN1 * RATE1 + (wage - PLAN1) * RATE2;
            }
            printf("Your tax: %g\n\n", tax);
        }
        else if (2 == n)
        {
            if (wage <= PLAN2)
            {
                tax = wage * RATE1;
            }
            else
            {
                tax = PLAN2 * RATE1 + (wage - PLAN2) * RATE2;
            }
            printf("Your tax: %g\n\n", tax);
        }
        else if (3 == n)
        {
            if (wage <= PLAN3)
            {
                tax = wage * RATE1;
            }
            else
            {
                tax = PLAN3 * RATE1 + (wage - PLAN3) * RATE2;
            }
            printf("Your tax: %g\n\n", tax);
        }
        else if (4 == n)
        {
            if (wage <= PLAN4)
            {
                tax = wage * RATE1;
            }
            else
            {
                tax = PLAN4 * RATE1 + (wage - PLAN4) * RATE2;
            }
            printf("Your tax: %g\n\n", tax);
        }
        else if (5 == n)
        {
            break;
        }
    }
    printf("Done.\n");

    return 0;
}