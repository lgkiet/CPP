#include "Stack.h"

bool Stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

bool Stack::isFull()
{
    if (top >= MAX)
        return true;
    else
        return false;
}

bool Stack::Push(int x)
{
    if (!isFull())
    {
        top++;
        s[top] = x;
        return true;
    }
    else
        return false;
}

bool Stack::Pop()
{
    if (!isEmpty())
    {
        top--;
        return true;
    }
    else
        return false;
}

int Stack::Top()
{
    return s[top];
}

int Stack::Size()
{
    return top + 1;
}

void Stack::print()
{
    for (int i = 0; i <= top; i++)
    {
        cout << s[i] << " ";
    }
}
