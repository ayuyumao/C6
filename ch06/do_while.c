#include <stdio.h>

int main(void)
{
    const int secret_code = 13;

    int code_entered;

    do
    {   // 循环体中的语句，至少执行一次
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("Please enter the secret code number: ");
        scanf("%d",&code_entered);
    }while (code_entered != secret_code);   //这里必须以分号结尾
    {
        printf("Congratulations! You are cured!\n");
    }
    return 0;
    
}