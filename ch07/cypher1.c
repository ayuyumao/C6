#include <stdio.h>
#define SPACE ' '   // space 表示单引号 空格 单引号

int main()
{
    char ch;

    ch = getchar();
    while(ch != '\n')
    {
        if (ch == SPACE)
        {
            putchar(ch);
        }else{
            putchar(ch + 1);    // 65 + 1
        }
        ch = getchar(); // A  之后 按了enter ---‘\n’
    }
    putchar(ch);

    return 0;
}