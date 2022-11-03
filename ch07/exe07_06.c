#include <stdio.h>
#define STOP '#'

int main(void)
{
    int ch;
    int n = 0;
    int flag = 0;

    printf("Enter some characters('#' to quit):\n");
    while ((ch = getchar()) != STOP)
    {
        switch (ch)
        {
        case 'e':
        {
            flag = 1;
            //↑保存一个出现e的标记;
            break;
        }
        case 'i':
        {
            if (1 == flag)
            {
                n++;
            }
            //↑统计ei出现的次数;
            flag = 0;
            break;
        }
        default:
        {
            flag = 0;
            //↑如果e的下一个字符不是i则清除标记;
        }
        }
    }
    printf("\nTotally exist %d times \'ei\'.\n", n);

    return 0;
}