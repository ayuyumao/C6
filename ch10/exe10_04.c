#include <stdio.h>
#define N 5

int find_max_index(const double a[], int n);
void show_array(const double a[], int n);

int main(void)
{
    double t;
    int max_index;
    double array[N] = {1.0, 4.0, 3.0, 2.0, 5.0};

    printf("Array:\n");
    show_array(array, N);
    max_index = find_max_index(array, N);
    printf("Maximum index is %d.\n", max_index);

    return 0;
}

int find_max_index(const double a[], int n)
{
    int j, index;
    double max = a[0];

    for (j = 1; j < n; j++)
    {
        if (max < a[j])
        {
            max = a[j];
            index = j;
        }
    }
    return index;
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