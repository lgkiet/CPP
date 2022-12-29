#pragma once
#include "KiHieu.h"
#include "NotNhac.h"
#include "DauLang.h"

class BanNhac
{
private:
    int slKiHieu;
    KiHieu **arr;

public:
    BanNhac();
    ~BanNhac();
    void Nhap();
    void Xuat();
    void Find_Count();
};
