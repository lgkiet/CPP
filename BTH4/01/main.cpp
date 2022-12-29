#include "PhanSo.h"
#include <iostream>
using namespace std;

int main()
{
    PhanSo a, b, c;
    int i = 5;
    cin >> a >> b;
    cout << a << endl;
    cout << b << endl;
    c = a+b;
    cout << c << endl;
    c = a+ PhanSo(PhanSo(i));
    cout << c << endl;
    c = PhanSo(i)+b;
    cout << c << endl;

    c = a-b;
    cout << c << endl;
    c = a-PhanSo(i);
    cout << c << endl;
    c = PhanSo(i)-b;
    cout << c << endl;

    c = a*b;
    cout << c << endl;
    c = a*PhanSo(i);
    cout << c << endl;
    c = PhanSo(i)*b;
    cout << c << endl;

    c = a/b;
    cout << c << endl;
    c = a/PhanSo(i);
    cout << c << endl;
    c = PhanSo(i)/b;
    cout << c << endl;

    bool d;
    d = a == b;
    cout << d << endl;
    d = a == PhanSo(i);
    cout << d << endl;
    d = PhanSo(i) == b;
    cout << d << endl;

    d = a != b;
    cout << d << endl;
    d = a != PhanSo(i);
    cout << d << endl;
    d = PhanSo(i) != b;
    cout << d << endl;

    d = a >= b;
    cout << d << endl;
    d = a >= PhanSo(i);
    cout << d << endl;
    d = PhanSo(i) >= b;
    cout << d << endl;

    d = a <= b;
    cout << d << endl;
    d = a <= PhanSo(i);
    cout << d << endl;
    d = PhanSo(i) <= b;
    cout << d << endl;

    d = a < b;
    cout << d << endl;
    d = a < PhanSo(i);
    cout << d << endl;
    d = PhanSo(i) < b;
    cout << d << endl;

    d = a > b;
    cout << d << endl;
    d = a > PhanSo(i);
    cout << d << endl;
    d = PhanSo(i) > b;
    cout << d << endl;
    
    return 0;
}