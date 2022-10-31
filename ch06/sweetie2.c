#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count;

    /*  第1步.第一个表达式，进行初始化操作，并且只会执行一次
        第2步.第二个表达式，进行条件判断，如果为真则进入循环体执行，如果为假，跳出循环
        第3步.执行循环体中的语句
        第4步.执行第三个表达式
        第5步.执行完第四步后，再进行条件判断
    */

    for (count = 1; count <= NUMBER; count++)
    {
        printf("Be my Valentine!\n");
    }
    return 0;
}