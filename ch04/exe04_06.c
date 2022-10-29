#include <stdio.h>
#include <string.h>
#define LEN 20

int main(void)
{
    char first_name[LEN],last_name[LEN];
    int first_len,last_len;

    printf("Please enter your firstname? ");
    scanf("%19s",first_name);
    printf("Please enter your lastname? ");
    scanf("%19s",last_name);
    first_len = strlen(first_name);
    last_len = strlen(last_len);

    printf("%s %s\n",first_name,last_name);
    printf("%*d %*d\n",first_len,first_len,last_len,last_len);
    printf("%s %s\n",first_name,last_name);
    printf("%-*d %-*d\n",first_len,first_len,last_len,last_len);


}