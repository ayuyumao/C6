#include <stdio.h>
#define BITS 8
int main(void)
{
    float speed, size,time;

    printf("Please enter net speed(Mbit/s): ");
    scanf("%f",&speed);
    printf("Please enter file size(Mbyte):");
    scanf("%f",&size);
    time = size * BITS / speed;
    printf("At %.2f megabits second, a file of %.2f megabytes\n",
            speed,size);
    printf("downloads in %.2f second.\n",time);

    return 0;
}