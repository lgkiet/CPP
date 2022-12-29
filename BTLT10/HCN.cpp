#include "HCN.h"

HinhChuNhat::HinhChuNhat() : DaGiac(4) {}

void HinhChuNhat::Nhap()
{
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Dinh " << i + 1 << endl;
            a[i].Nhap();
        }
        if (!Check())
        {
            cout << "Cac diem vua nhap khong hop le! Vui long nhap lai..." << endl;
        }
    } while (!Check());
}

bool HinhChuNhat::Check()
{
    if (Distance(a[0], a[1]) == 0 || Distance(a[0], a[2]) == 0 || Distance(a[0], a[3]) == 0)
        return false;
    return Distance(a[0], a[1]) == Distance(a[2], a[3]) && Distance(a[0], a[2]) == Distance(a[3], a[1]) && Distance(a[0], a[3]) == Distance(a[1], a[2]);
}