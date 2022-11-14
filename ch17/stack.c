#include <stdio.h>
#include "stack.h"

void init(stack *st)
{
    st->top = 0;
    return;
}

bool isempty(stack *st)
{
    return 0 == st->top;
}

bool isfull(stack *st)
{
    return MAXSIZE == st->top;
}

bool push(stack *st, item val)
{
    if (isfull(st))
    {
        return false;
    }
    else
    {
        st->data[st->top++] = val;
        return true;
    }
}

bool pop(stack *st, item *val)
{
    if (isempty(st))
    {
        return false;
    }
    else
    {
        *val = st->data[--st->top];
        return true;
    }
}