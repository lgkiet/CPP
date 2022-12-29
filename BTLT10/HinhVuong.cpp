#include "HinhVuong.h"

bool HinhVuong::Check()
{
    if (!HinhChuNhat::Check())
        return false;

    float d1 = Distance(a[0], a[1]);
    float d2 = Distance(a[0], a[2]);
    float d3 = Distance(a[0], a[3]);

    if (d1 == d2 && sqrt(2) * d1 == d3 && sqrt(2) * Distance(a[1], a[3]) == Distance(a[1], a[2]))
        return true;
    if (d1 == d3 && sqrt(2) * d1 == d2 && sqrt(2) * Distance(a[1], a[2]) == Distance(a[1], a[3]))
        return true;
    if (d2 == d3 && sqrt(2) * d2 == d1 && sqrt(2) * Distance(a[2], a[1]) == Distance(a[2], a[3]))
        return true;

    return false;
}

void HinhVuong::Nhap()
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
            cout << "Cac diem vua nhap khong phai hinh vuong! Vui long nhap lai..." << endl;
        }
    } while (!Check());
}