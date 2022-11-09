#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81

void append(FILE *source, FILE *dest);

int main(int argc, char *argv[])
{
    int i, ch;
    int files = 0;
    FILE *fa;
    FILE *fs;

    if (argc < 3)
    {
        printf("Usage: %s appendfile sourcefile.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fa = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        //↑设置缓冲区大小为BUFSIZE;
        //↑_IOFBF表示完全缓冲;
        //↑NULL表示为fa指向的文件分配缓冲区;
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    for (i = 2; i < argc; i++)
    {
        if (strcmp(argv[i], argv[1]) == 0)
        {
            fputs("Can't append file to itself\n", stderr);
            //↑防止文件自身附加在文件末尾;
        }
        else if ((fs = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", argv[i]);
        }
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                //↑同上一个setvbuf函数所述;
                //↑本次调用是为fs指向的文件分配缓冲区;
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
            {
                /*↑当读或写出现错误
                ferror函数返回一个非0值*/
                fprintf(stderr, "Error in reading file %s.\n", argv[i]);
            }
            if (ferror(fa) != 0)
            {
                fprintf(stderr, "Error in writing file %s.\n", argv[1]);
            }
            fclose(fs);
            files++;
            printf("File %s appended.\n", argv[i]);
        }
    }
    printf("Done appending. %d files appended.\n", files);
    rewind(fa); //返回文件起始处;
    printf("%s contents:\n", argv[1]);
    while ((ch = getc(fa)) != EOF)
    {
        putchar(ch);
    }
    putchar('\n');
    puts("Done displaying.");
    fclose(fa);

    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];
    //↑静态无链接变量只分配一次内存;

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
    {
        /*↑fread函数把source指向的
        文件中的BUFSIZE块char类型的
        数据写入temp数组中,返回值是成功
        读取数据块的数量;*/
        fwrite(temp, sizeof(char), bytes, dest);
        /*↑fwrite函数把temp数组中的
        bytes块char类型的数据写入dest
        指向的文件中,返回值是成功写入数据
        块的数量;*/
    }
    return;
}