#include <stdio.h>

int amin(void)
{
    int ch;
    int ct = 0;

    printf("Please enter some characters");
    while((ch = getchar()) != EOF)
    {
        ct++;
    }
    printf("Characters: %d.\n",ct);

    return 0;
}