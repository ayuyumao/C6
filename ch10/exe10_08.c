#include <stdio.h>
#define LEN1 7
#define LEN2 3

void copy_arr(double ar1[], const double ar2[], int n);
void show_arr(const double ar[], int n);

int main(void)
{
    double orig[LEN1] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    double copy[LEN2];

    printf("Array:\n");
    show_arr(orig, LEN1);
    printf("Copy 3 to 5 for target array:\n");
    copy_arr(copy, orig + 2, LEN2);
    show_arr(copy, LEN2);

    return 0;
}

void copy_arr(double ar1[], const double ar2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        ar1[i] = ar2[i];
    }
    return;
}

void show_arr(const double ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%-5g", ar[i]);
    }
    putchar('\n');
    return;
}