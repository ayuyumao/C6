#include <stdio.h>
#include <float.h>

int main(void)
{
    float f_value = 1.0 / 3.0;
    double d_value = 1.0 / 3.0;

    printf("FLT_DIG = %d,DBL_DIG = %d\n",FLT_DIG,DBL_DIG);
    printf("a.f_value = %.6f, d_value = %.6f\n",f_value,d_value);
    printf("b.f_value = %.12f, d_value = %.12f\n",f_value,d_value);
    printf("c.f_value = %.16f, d_value = %.16f\n",f_value,d_value);

    return 0;
}