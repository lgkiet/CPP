#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class KiHieu
{
protected:
    float TruongDo;

public:
    KiHieu();
    ~KiHieu();
    virtual void Nhap();
    virtual void Xuat();
    virtual bool isDauLangDen();
};