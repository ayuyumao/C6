#include <stdio.h>

int main(void)
{
    int age;
    double seconds = 3.156e7;

    printf("Please enter your age: ");
    scanf("%d",&age);
    seconds = age * seconds;
    printf("%d years old includes %e seconds.",age,seconds);

    return 0;
}