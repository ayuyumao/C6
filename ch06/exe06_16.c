#include <stdio.h>
#define RATE_SIMP 0.10
#define RATE_COMP 0.05
#define INIT_AMT 100.0

int main(void)
{
    int years = 0;
    double daphne = INIT_AMT;
    double deirdre = INIT_AMT;

    do
    {
        daphne += RATE_SIMP * INIT_AMT;
        deirdre += RATE_COMP * deirdre;
        years++;
    } while (deirdre < daphne);
    printf("Investment values after %d years:\n", years);
    printf("Daphne: $%.2f\n", daphne);
    printf("Deirdre: $%.2f\n", deirdre);
    printf("Deirdre(invest) > Daphne(invest)\n");

    return 0;
}