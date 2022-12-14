#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_row(int ar[][COLS],int rows);
void sum_cols(int [][COLS],int);
int sum2d(int(*ar)[COLS],int rows);

int main(void)
{
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {13,10,8,6}
    };

    sum_row(junk,ROWS);
    sum_cols(junk,ROWS);
    printf("Sum of all elements = %d\n",sum2d(junk,ROWS));

    return 0;
}

void sum_row(int ar[][COLS],int rows)
{
    int r;
    int c;
    int tot;

    for (r = 0; r < rows; r++)
    {
        tot = 0;
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
        printf("row %d: sum = %5d\n",r,tot);
    }
}

void sum_cols(int ar[][COLS],int rows)
{
    int r;
    int c;
    int tot;

    for (c = 0; c < COLS; c++)
    {
        tot = 0;
        for (c = 0; c < COLS; r++)
            tot += ar[r][c];
        printf("row %d: sum = %5d\n",r,tot);
    }
}

int sum2d(int(*ar)[COLS],int rows)
{
    int r;
    int c;
    int tot = 0;

    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
    return tot;
    }
}