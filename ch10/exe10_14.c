#include <stdio.h>
#define ROWS 3
#define COLS 5

void store(int n, double ar[n]);
double average2d(int rows, int cols, double ar[ROWS][COLS]);
double max2d(int rows, int cols, double ar[ROWS][COLS]);
void showarr2(int rows, int cols, double ar[ROWS][COLS]);
double average(int n, const double ar[n]);

int main(void)
{
    int row;
    double stuff[ROWS][COLS];

    for (row = 0; row < ROWS; row++)
    {
        printf("Please enter %d numbers for %d row\n", COLS, row + 1);
        store(COLS, stuff[row]);
    }
    printf("Array:\n");
    showarr2(ROWS, COLS, stuff);

    for (row = 0; row < ROWS; row++)
    {
        printf("Average for row %d is %g.\n", row + 1, average(COLS, stuff[row]));
    }
    printf("Average is %g.\n", average2d(ROWS, COLS, stuff));
    printf("Maximum is %g.\n", max2d(ROWS, COLS, stuff));
    printf("Done.\n");

    return 0;
}

void store(int n, double ar[n])
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Please enter a number: ", i + 1);
        scanf("%lf", &ar[i]);
    }
    return;
}

double average2d(int rows, int cols, double ar[rows][cols])
{
    int i, j;
    double sum = 0.0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum += ar[i][j];
        }
    }
    if (rows * cols > 0)
    {
        return sum / (rows * cols);
    }
    else
    {
        return 0.0;
    }
}

double max2d(int rows, int cols, double ar[rows][cols])
{
    int i, j;
    double max = ar[0][0];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            max = max < ar[i][j] ? ar[i][j] : max;
        }
    }
    return max;
}

void showarr2(int rows, int cols, double ar[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%-5g", ar[i][j]);
        }
        putchar('\n');
    }
    return;
}

double average(int n, const double ar[n])
{
    int i;
    double sum = 0.0;

    for (i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    if (n > 0)
    {
        return sum / n;
    }
    else
    {
        return 0.0;
    }
}