#pragma once
#include <iostream>
#include <string>
#include "SachGiaoKhoa.h"
#include "TieuThuyet.h"
using namespace std;

class Sach
{
protected:
    string TenSach;
    string TacGia;

public:
    Sach();
    ~Sach();
    virtual void Nhap();
    virtual void Xuat();
};
