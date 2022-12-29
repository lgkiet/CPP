#include "NotNhac.h"

NotNhac::NotNhac()
{
    this->CaoDo = NULL;
}
NotNhac::~NotNhac() {}

void NotNhac::Nhap()
{
    cout << "Nhap cao do: ";
    cin >> this->CaoDo;
    KiHieu::Nhap();
}

void NotNhac::Xuat()
{
    string Not;
    switch (CaoDo)
    {
    case 'C':
        Not = "Do";
        break;
    case 'D':
        Not = "Re";
        break;
    case 'E':
        Not = "Mi";
        break;
    case 'F':
        Not = "Fa";
        break;
    case 'G':
        Not = "Sol";
        break;
    case 'A':
        Not = "La";
        break;
    case 'B':
        Not = "Si";
        break;
    default:
        Not = "NONE";
        break;
    }
    cout << Not;
    KiHieu::Xuat();
    cout << " - ";
}

bool NotNhac::isDauLangDen()
{
    return false;
}
