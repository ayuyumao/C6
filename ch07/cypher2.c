#include <stdio.h>
#include <ctype.h>
#define SPACE ' '   // space 表示单引号 空格 单引号

int main()
{
    char ch;

    while((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            putchar(ch +1);
        }else{
            putchar(ch);
        }
    }
    putchar(ch);
    
    return 0;
}