#include <stdio.h>
#define N 5

int find_max(const int a[], int n);
void show_array(const int a[], int n);

int main(void)
{
    int max;
    int array[N] = {1, 4, 3, 2, 5};

    printf("Array:\n");
    show_array(array, N);
    max = find_max(array, N);
    printf("The maximum is %d.\n", max);

    return 0;
}

int find_max(const int a[], int n)
{
    int i;
    int max = a[0];

    for (i = 1; i < n; i++)
    {
        max = max < a[i] ? a[i] : max;
    }
    return max;
}

void show_array(const int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%-3d", a[i]);
    }
    putchar('\n');
    return;
}