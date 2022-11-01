#include <stdio.h>

int main(void)
{
    int i = 1;
    int friends = 5;

    while(friends < 150)
    {
        printf("At %d weeks,Rabnud has ",i);
        printf("%4d friends.\n",friends);
        friends = 2 * (friends - i++);
    }
    printf("At %d weeks over Bunbar's number(150).\n",i);

    return 0;
}