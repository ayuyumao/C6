#include <stdio.h>
#define LEN 20
int main(void)
{
    float height;
    char name[20];

    printf("Please enter your name: ");
    scanf("%s",name);
    printf("then enter your height in inch: ");
    scanf("%f",&height);
    printf("%s, you are %0.3f feet tall\n",name,height / 12.0);

    return 0;
}