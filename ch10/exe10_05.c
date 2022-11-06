#include <stdio.h>
#define N 5

int d_value(const double a[], int n);
void show_array(const double a[], int n);

int main(void)
{
    double m, n, val;
    double array[N] = {1.0, 4.0, 3.0, 2.0, 5.0};

    printf("Array:\n");
    show_array(array, N);
    val = d_value(array, N);
    printf("Maximum minus minimum is %g.\n", val);

    return 0;
}

int d_value(const double a[], int n)
{
    int i;
    double max = a[0];
    double min = a[0];

    for (i = 1; i < n; i++)
    {
        max = max < a[i] ? a[i] : max;
        min = min > a[i] ? a[i] : min;
    }
    return max - min;
}

void show_array(const double a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%-5g", a[i]);
    }
    putchar('\n');
    return;
}