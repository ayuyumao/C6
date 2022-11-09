#include <stdio.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 30
#define LEVELS 10
#define LEN 50
const char trans[LEVELS + 1] = " .':~*=&%#"; //存储需要转换的字符;

int clean_distortion(int (*a)[COLS], int rows, int x, int y);
void change(int (*a)[COLS], char (*b)[COLS], int rows);

int main(void)
{
    int row, col;
    FILE *infile;
    char filename[LEN];
    int figure[ROWS][COLS];
    char picture[ROWS][COLS];

    printf("Please enter a filename: ");
    scanf("%49s", filename);

    if ((infile = fopen(filename, "r+")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            fscanf(infile, "%d", &figure[row][col]);
            //↑从文件中读取数字;
        }
    }
    if (ferror(infile))
    {
        fprintf(stderr, "Error getting data from file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            figure[row][col] = clean_distortion(figure, ROWS, row, col);
        }
    }
    change(figure, picture, ROWS);
    printf("File %s have been transformed pictures:\n", filename);
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            putchar(picture[row][col]);
        }
        putchar('\n');
    }

    fseek(infile, 0L, SEEK_END); //定位到文件末尾;
    putc('\n', infile);          //↓将结果存储到文本文件中;
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            fprintf(infile, "%c", picture[row][col]);
        }
        putc('\n', infile);
    }
    if (fclose(infile) != 0)
    {
        fprintf(stderr, "Can't close file %s\n", filename);
    }

    return 0;
}

int clean_distortion(int (*a)[COLS], int rows, int x, int y)
{
    int i = 0, average = 0, cnt = 0, sur = 0;
    int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    for (i = 0; i < 4; ++i)
    {
        int dx = x + d[i][0], dy = y + d[i][1];
        if (dx < 0 || dx >= ROWS || dy < 0 || dy >= COLS) continue;
        ++sur;
        if (a[x][y] - a[dx][dy] > 1)
        {
            ++cnt, average += a[dx][dy];
        }
    }
    if (cnt != sur) return a[x][y];
    return 1.0 * average / cnt + 0.5;
}

void change(int (*a)[COLS], char (*b)[COLS], int rows)
{
    int row, col;

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            b[row][col] = trans[a[row][col]];
            //↑进行数字对应的字符转换;
        }
    }
    return;
}