#pragma once
#include "Sach.h"
#include <string.h>
using namespace std;
class TieuThuyet : public Sach
{
private:
    string TheLoai;
    int NamXB;

public:
    TieuThuyet();
    ~TieuThuyet();
    void Nhap();
    void Xuat();
};
