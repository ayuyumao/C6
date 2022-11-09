#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f1;
    FILE *f2;
    int ch1, ch2;

    if (argc != 3)
    {
        printf("Usage: %s file1 file2\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((f1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((f2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    ch1 = getc(f1);
    ch2 = getc(f2);
    while (ch1 != EOF || ch2 != EOF)
    {
        while (ch1 != EOF && ch1 != '\n')
        {
            putchar(ch1);
            ch1 = getc(f1);
        }
        if (ch1 != EOF)
        {
            if (ch2 == EOF) //若是文件2以读取完毕则换行;
            {
                putchar('\n');
            }
            else //文件2未读取完毕打印空格隔开2个文件内容;
            {
                putchar(' ');
            }
            ch1 = getc(f1); //光标读取至文件1的下一行;
        }
        while (ch2 != EOF && ch2 != '\n')
        {
            putchar(ch2);
            ch2 = getc(f2);
        }
        if (ch2 != EOF)
        {
            putchar('\n');
            ch2 = getc(f2); //光标读取至文件2的下一行;
        }
    }
    if (fclose(f1) != 0)
    {
        fprintf(stderr, "Can't close %s\n", argv[1]);
    }
    if (fclose(f2) != 0)
    {
        fprintf(stderr, "Can't close %s\n", argv[2]);
    }

    return 0;
}