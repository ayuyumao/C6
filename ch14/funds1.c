#include <stdio.h>
#define FUNDLEN 50

double sum(double x, double y);

struct sum
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

int main(void)
{
    struct sum stan =
        {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky's Savings and Loan",
            8543.94};

    printf("Stan has a total of $%.2f.\n",
            sum(stan.bankfund,stan.savefund));

    return 0;
}

double sum(double x,double y)
{
    return (x + y);
}