#include "CRectangle.h"

void CRectangle::Nhap()
{
    cout << "Nhap chieu dai: ";
    cin >> this->Length;
    cout << "Nhap chieu rong: ";
    cin >> this->Width;
}

void CRectangle::Xuat()
{
    cout << "Chieu dai: " << this->Length << endl;
    cout << "Chieu rong: " << this->Width << endl;
}

float CRectangle::Area()
{
    return this->Width * this->Length;
}
