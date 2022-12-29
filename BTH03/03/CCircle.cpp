#include "CCircle.h"

void CCircle::Nhap()
{
    cout << "Nhap tam: " << endl;
    this->center.Nhap();
    cout << "Nhap ban kinh: ";
    cin >> this->radius;
}

void CCircle::Xuat()
{
    cout << "Tam: " << endl;
    this->center.Xuat();
    cout << "Ban kinh: " << this->radius << endl;
}

float CCircle::Area()
{
    return 3.14 * this->radius * this->radius;
}