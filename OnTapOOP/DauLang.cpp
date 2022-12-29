#include "DauLang.h"

DauLang::DauLang() {}
DauLang::~DauLang() {}

void DauLang::Nhap()
{
    KiHieu::Nhap();
}

void DauLang::Xuat()
{
    cout << "Z";
    KiHieu::Xuat();
    cout << " - ";
}

bool DauLang::isDauLangDen()
{
    if (this->TruongDo == 1)
        return true;
    return false;
}