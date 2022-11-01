#include <stdio.h>
#define PATE1 0.13230
#define PATE2 0.15040
#define PATE3 0.30025
#define PATE4 0.34025
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
#define BASE1 (PATE1 * BREAK1)
#define BASE2 (BASE1 + (PATE2 * (BREAK2 - BREAK1)))
#define BASE3 (BASE2 + (PATE3 * (BREAK3 - BREAK2)))

int main(void)
{
    double kwh;
    double bill;

    printf("Please enter the keh used.\n");
    scanf("%lf",&kwh);
    if (kwh <= BREAK1)
    {
        bill = PATE1 * kwh;
    }else if (kwh <= BREAK2){
        bill = BASE1 + (PATE2 * (kwh - BREAK1));
    }else if(kwh <= BREAK3){
        bill = BASE2 + (PATE3 * (kwh - BREAK2));
    }else{
        bill = BASE3 + (PATE4 * (kwh - BREAK3));
    }
    printf("The charge for %.1f kwh is $%1.2f.\n",kwh,bill);

    return 0;
}