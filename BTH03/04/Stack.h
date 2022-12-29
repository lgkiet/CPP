#include <iostream>
#define MAX 1000
using namespace std;

class Stack
{
private:
    int top = -1;
    int s[MAX];

public:
    bool Push(int x);
    bool Pop();
    bool isEmpty();
    bool isFull();
    int Top();
    int Size();
    void print();
};