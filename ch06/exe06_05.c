#include <stdio.h>

int main(void)
{
    int i,j;
    char ch;

    printf("Please enter a upper letter: ");
    scanf("%c",&ch);
    
    int length = ch - 'A';
    // 循环次数
    printf("The pyramid of %c is:\n",ch);
    for (i = 0; i <= length; i++)
    {
        char t = 'A' - 1;
        for (j = 0; j < length - i; j++)
        {
            printf(" ");    // 左侧空格数
        }
        
        for (j = 0; j <= i; j++)
        {
            printf("%c",++t);   // 打印递增字母
        }
        for (j = 0;j < i;j++)
        {
            printf("%c",--t); // 打印递减字母
        }
        printf("\n");
    }

    return 0; 
}