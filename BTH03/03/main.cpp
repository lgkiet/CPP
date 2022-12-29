#include <iostream>
#include "CCircle.h"
#include "CRectangle.h"

using namespace std;

float area(CCircle a, CRectangle b)
{
    return a.Area() + b.Area();
}

int main()
{
    CCircle a;
    CRectangle b;
    a.Nhap();
    b.Nhap();

    cout << area(a, b) << endl;
    return 0;
}