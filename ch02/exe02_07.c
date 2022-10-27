#include <stdio.h>

void Smile(void);

int main(void)
{
    printf("Smile!Smile!Smile!\n");
    Smile();
    Smile();
    printf("\n");
    Smile();
    printf("\n");
    return 0;
}

void Smile(void)
{
    printf("Smile!");
}