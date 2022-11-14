#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>
#define MAXSIZE 100

typedef char item; //栈的数据类型为item类型;

typedef struct
{
    item data[MAXSIZE];
    int top;
} stack;

void init(stack *st); //栈的初始化函数;

bool isempty(stack *st); //判断栈是否为空;

bool isfull(stack *st); //判断栈是否已满;

bool push(stack *st, item val); //令元素入栈;

bool pop(stack *st, item *val); //令元素出栈;

#endif