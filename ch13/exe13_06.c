#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char *argv[])
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;
    char temp[LEN];

    printf("Please enter a filename:\n");
    scanf("%39s", temp);

    if ((in = fopen(temp, "r")) == NULL)
    {
        fprintf(stderr, "I could't open the file \"%s\"\n", temp);
        exit(EXIT_FAILURE);
    }
    //↓拷贝文件名;
    strncpy(name, temp, LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");
    //↑在文件名后面添加.red;
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    //↓拷贝数据;
    while ((ch = getc(in)) != EOF)
    {
        if (count++ % 3 == 0)
        {
            putc(ch, out);
        }
    }
    if (fclose(in) != 0 || fclose(out) != 0)
    {
        fprintf(stderr, "Error in closing files\n");
    }

    return 0;
}