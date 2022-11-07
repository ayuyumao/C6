#include <stdio.h>
#include <string.h>
#define LEN 10

char *s_gets(char *st, int n);
char *string_in(char *str, char *pt);

int main(int argc, char *argv[])
{
    char str1[LEN];
    char str2[LEN];

    printf("Please enter the first string (EOF to quit):\n");
    while (s_gets(str1, LEN) != NULL)
    {
        printf("Please enter the second string:\n");
        if (s_gets(str2, LEN) != NULL)
        {
            if (string_in(str1, str2) != NULL)
            {
                printf("String %s exists in string %s\n", str2, str1);
            }
            else
            {
                printf("String %s doesn't exist in string %s\n", str2, str1);
            }
        }
        printf("You can enter again (EOF to quit):\n");
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

char *string_in(char *str, char *pt)
{
    int i = 0;
    int j = 0;
    int str_len = strlen(str); //获取主串长度;
    int pt_len = strlen(pt);   //获取子串长度;

    while (i < str_len && j < pt_len)
    {
        if (str[i] == pt[j])
        {
            i++;
            j++;
        }
        else //若是主串字符与子串字符不相同则重新匹配;
        {
            i = i - j + 1;
            j = 0;
        }
    }
    return j == pt_len ? str : NULL;
}