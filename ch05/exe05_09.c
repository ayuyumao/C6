#include <stdio.h>
void Temperature(double temp);

int main(void)
{
    double temp;

    printf("Please enter a temperature number(q to quit): ");
    while(scanf("%lf",&temp) == 1)
    {
        Temperature(temp);
        printf("You can enter agin (q to quit): ");
    }
    printf("Done!\n");

    return 0;
}

void Temperature(double temp)
{
    const double a = 32.0;
    const double b = 273.16;

    double centigrade;   // 摄氏温度
    double kelvin;   // 开氏温度

    centigrade = 5.0 / 9.0 * (temp - a);
    kelvin = centigrade + b;
    printf("Centigrade Temperature: %.2f.\n",centigrade);
    printf("Fahrenheit Temperature: %.2f.\n", temp);
    printf("Kelvin Temperature: %.2f.\n",centigrade);
}