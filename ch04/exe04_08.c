#include <stdio.h>
#define GALLON_TO_LITER 3.785f
#define MILE_TO_KM 1.609f
int main(int argc, char const *argv[])
{
    float distance,gas;
    printf("Input the distance you travelled(in miles): ");
    scanf("%f",&distance);
    printf("Input the gas you spend(in gallon): ");
    scanf("%f",&gas);

    printf("Fuel cosumptions:\n");
    printf("USA: your gas wear is %.1f mile/gallon\n",distance / gas);
    printf("Europe: your gas wear is %.1f liter/100km\n",
            gas * GALLON_TO_LITER / (distance * MILE_TO_KM));

    return 0;
}
