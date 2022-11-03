#include <stdio.h>
#define STOP '#'

int main(void)
{
    int ch;
    int i = 0;

    printf("Enter some characters('#' to quit):\n");
    while((ch = getchar()) != STOP)
    {
        if (i++ % 8 == 0)
        {
            putchar('\n');
        }
        if(ch =='\n')
        {
            printf("'\\n'-%3d",ch);
        }else if (ch == '\t')
        {
            printf("'\\t'-%3d",ch);
        }else{
            printf("'%c'-%3d",ch);
        }
    }
    printf("Done.\n");

    return 0;
}