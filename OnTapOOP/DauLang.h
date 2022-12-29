#pragma once
#include "KiHieu.h"

class DauLang : public KiHieu
{
public:
    DauLang();
    ~DauLang();
    void Nhap();
    void Xuat();
    bool isDauLangDen();
};
