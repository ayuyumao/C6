#include <stdio.h>
#define LEN 20
#include <string.h>

int main(void)
{
    int i;
    char str[LEN];

    printf("Please enter a world: ");
    scanf("%19s",str);
    printf("The world is:\n");
    printf("%s\n",str);

    printf("Reversing the world is:\n");
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}