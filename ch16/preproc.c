#include <stdio.h>
#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde"
#define FOUR TWO *TWO
#define PX printf("X is %d.\n", x);
#define FET "X is %d.\n"

int main(void)
{
    int x = TWO;

    PX;
    x = FOUR;
    printf(FET, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");

    return 0;
}