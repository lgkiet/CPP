#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack s;
    cout << s.Pop() << endl;
    cout << s.Push(3) << endl;
    cout << s.Pop() << endl;
    cout << s.Push(5) << endl;
    cout << s.Push(6) << endl;

    cout << s.isEmpty() << endl;
    cout << s.isFull() << endl;

    cout << "\n"
         << s.Top() << endl;
    cout << s.Pop();
    cout << s.Pop();
    s.print();
    cout << s.isEmpty();
    return 0;
}