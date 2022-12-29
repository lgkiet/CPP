#pragma once
#include "KiHieu.h"

class NotNhac : public KiHieu
{
private:
    char CaoDo;

public:
    NotNhac();
    ~NotNhac();
    void Nhap();
    void Xuat();
    bool isDauLangDen();
};
