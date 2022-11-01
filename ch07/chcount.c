#include <stdio.h>
#define PERIOD '.'

int main(void)
{
    char ch;
    int charCount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if(ch != '"' && ch != '\'')
        {
            charCount++;
        }
    }
    printf("There are %d non-quite characters.\n",charCount);

    return 0;
    
}