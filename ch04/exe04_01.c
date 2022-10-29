#include <stdio.h>
#define MAX 20
int main(void)
{
    char firstName[MAX];
    char lastName[MAX];

    printf("Enter your first name? ");
    scanf("%*s", 19,firstName);
    printf("Enter your last name? ");
    scanf("%*s",19, lastName);
    printf("Hello, %s, %s\n",firstName,lastName);

    return 0;
}