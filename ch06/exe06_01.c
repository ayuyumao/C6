#include <stdio.h>
#define LEN 26

int main(void)
{
    int n;
    char letters[LEN];

    for (n = 0; n < LEN; n++)
    {
        letters[n] = 'a' + n;
    }
    printf("Here are %d letters:\n",LEN);
    for(n = 0; n < LEN; n++)
    {
        printf("%-3c",letters[n]);
    }

    return 0;
}