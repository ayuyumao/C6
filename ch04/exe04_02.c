#include <stdio.h>
#include <string.h>
#define MAX 20
int main(void)
{
    char firstName[MAX];
    char lastName[MAX];
    
    int len_first;
    int len_last;

    printf("Enter your first name? ");
    scanf("%*s", 19,firstName);
    printf("Enter your last name? ");
    scanf("%*s",19, lastName);
    
    len_first = strlen(firstName);
    len_last = strlen(lastName);

    printf("\"%s\", \"%s\"\n",firstName,lastName);
    printf("\"%20s\", \"%-20s\"\n",firstName,lastName);
    printf("\"%-20s\", \"%-20s\"\n",firstName,lastName);
    printf("\"%*s\", \"%*s\"\n",len_first + 3,firstName,len_last + 3,lastName);

    return 0;
}