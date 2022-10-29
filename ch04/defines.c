#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d --- Smallest int: %d\n",
            INT_MAX,INT_MIN);
    printf("Biggest long long: %lld --- Smallest long long: %lld\n",
            LLONG_MIN,LLONG_MIN);
    printf("One byte = %d bits on this system.\n",CHAR_BIT);
    printf("Largest double: %e == Smallest double = %e\n",
            DBL_MAX,DBL_MIN);
    printf("Biggest float: %e ==  Smallest normal float: %e\n",
            FLT_MAX,FLT_MIN);
    printf("Double precision = %d == float precision = %d digits\n",
            DBL_DIG,FLT_DIG);
    printf("Double mant: %d == float epsilon = %d\n",
            DBL_MANT_DIG,FLT_MANT_DIG);
    printf("Double min 10 exp = %d --- Float min 10 exp = %d\n",
            DBL_MIN_10_EXP,FLT_MIN_10_EXP);
    printf("float epsilon = %e\n",FLT_EPSILON);
    
    return 0;
}