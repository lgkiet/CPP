#include "PhanSo.h"

PhanSo::PhanSo():iMau(1), iTu(1){}
PhanSo::PhanSo(int iTu, int iMau) : iTu(iTu), iMau(iMau){}
PhanSo::PhanSo(int a): iTu(a), iMau(1){}
PhanSo::operator float(){
    return (float)iTu/iMau;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void RutGon(PhanSo &a)
{
    int x = a.iMau;
    int y = a.iTu;
    a.iMau /= gcd(x, y);
    a.iTu /= gcd(x, y);
}

istream& operator>>(istream& is, PhanSo &a)
{
    cout << "Tu so: ";
    is >> a.iTu;
    do
    {
        cout << "Mau so: ";
        is >> a.iMau;
    }while(a.iMau == 0);
    return is;
}

ostream& operator<<(ostream& os, PhanSo &a)
{
    RutGon(a);
    os << a.iTu;
    if(a.iMau != 0 && a.iMau != 1)
        os << "/" << a.iMau;
    return os;
}

PhanSo operator+(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.iTu = a.iMau*b.iTu + b.iMau*a.iTu;
    result.iMau = a.iMau*b.iMau;
    
    return result;
}

PhanSo operator-(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.iTu = a.iMau*b.iTu - b.iMau*a.iTu;
    result.iMau = a.iMau*b.iMau;
    return result;
}

PhanSo operator*(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.iTu = a.iTu*b.iTu;
    result.iMau = a.iMau*b.iMau;
    
    return result;
}

PhanSo operator/(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.iTu = a.iTu*b.iMau;
    result.iMau = a.iMau*b.iTu;
    return result;
}

bool operator==(PhanSo a, PhanSo b)
{
    if(float(a) == float(b))
        return true;
    return false;
}

bool operator!=(PhanSo a, PhanSo b)
{
    if(float(a) != float(b))
        return true;
    return false;
}

bool operator<=(PhanSo a, PhanSo b)
{
    if(float(a) <= float(b))
        return true;
    return false;
}

bool operator>=(PhanSo a, PhanSo b)
{
    if(float(a) >= float(b))
        return true;
    return false;
}

bool operator>(PhanSo a, PhanSo b)
{
    if(float(a) > float(b))
        return true;
    return false;
}

bool operator<(PhanSo a, PhanSo b)
{
    if(float(a) < float(b))
        return true;
    return false;
}
