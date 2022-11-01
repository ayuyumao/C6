#include <stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while(scanf("%f",&temperature) == 1)
    {
        all_days++;
        // if语句是一个条件判断语句如果条件成立，则执行if中的代码
        // 否则不成立则执行if语句后面的代码
        if (temperature < FREEZING)
        {
            cold_days++;
        }
    }
    if(all_days != 0)
    {
        printf("%d days total: %.1f%% were below freeing.\n",
                all_days, 100.0 * (float) cold_days / all_days);
    }
    if (all_days == 0)
    {
        printf("No data entered!\n");
    }

    return 0;
}