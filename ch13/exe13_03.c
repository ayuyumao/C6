#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define LEN 50

int main(int argc, char *argv[])
{
    int ch;
    FILE *fp;
    char filename[LEN];

    printf("Please enter a filename: ");
    scanf("%49s", filename);

    if ((fp = fopen(filename, "r+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        fseek(fp, -1L, SEEK_CUR); //回退一个字节;
        putc(toupper(ch), fp);
        fseek(fp, 0L, SEEK_CUR); //改变文件状态,使得下一个字符可以被正常读取(详情参见C陷阱与缺陷一书);
    }
    rewind(fp);
    printf("File %s:\n", filename);
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
        /*↑显示到屏幕上检测
        字符是否成功转换为大写;*/
    }
    putchar('\n');
    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Can't close %s\n", filename);
    }

    return 0;
}