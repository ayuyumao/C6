#include <stdio.h>
#include <string.h>
#define LEN 10

char *s_gets(char *st, int n);
void reverse(char *str);

int main(int argc, char *argv[])
{
    char input[LEN];

    printf("Please enter a string (EOF to quit):\n");
    while (s_gets(input, LEN) != NULL)
    {
        printf("String:\n");
        puts(input);
        reverse(input);
        printf("After reversing:\n");
        puts(input);
        printf("You can enter a string again (EOF to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}

void reverse(char *str)
{
    int i;
    char temp;
    int len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return;
}