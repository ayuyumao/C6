#include <stdio.h>
#include <ctype.h>

void attain_pos(void);
int position(int ch);

int main(void)
{
    attain_pos();

    return 0;
}

void attain_pos(void)
{
    int ch;
    int figure;

    printf("Please enter a character (EOF to quit):\n");
    while ((ch = getchar()) != EOF)
    {
        figure = position(ch);
        if (figure)
        {
            printf("%c is %d in alphabet.\n", ch, figure);
        }
        else
        {
            printf("%c isn't a letter!\n", ch); //包括回车换行符和空白符;
        }
        while (getchar() != '\n')
            continue;
        printf("You can enter again (EOF to quit): ");
    }
    printf("Done.\n");
}

int position(int ch)
{
    if (isupper(ch))
    {
        return (ch - 'A' + 1);
    }
    else if (islower(ch))
    {
        return (ch - 'a' + 1);
    }
    return 0;
}