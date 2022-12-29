#pragma once
#include <iostream>
using namespace std;

class PhanSo{
private:
    int iTu, iMau;
public:
    PhanSo();
    PhanSo(int iTu, int iMau);
    PhanSo(int a);
    operator float();
    friend void RutGon(PhanSo &a);
    friend istream& operator>>(istream& is, PhanSo &a);
    friend ostream& operator<<(ostream& os, PhanSo &a);
    friend PhanSo operator+(PhanSo a, PhanSo b);
    friend PhanSo operator-(PhanSo a, PhanSo b);
    friend PhanSo operator*(PhanSo a, PhanSo b);
    friend PhanSo operator/(PhanSo a, PhanSo b);
    friend bool operator==(PhanSo a, PhanSo b);
    friend bool operator!=(PhanSo a, PhanSo b);
    friend bool operator>=(PhanSo a, PhanSo b);
    friend bool operator<=(PhanSo a, PhanSo b);
    friend bool operator<(PhanSo a, PhanSo b);
    friend bool operator>(PhanSo a, PhanSo b);
};