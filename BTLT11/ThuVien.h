#pragma once
#include "BanDoc.h"
using namespace std;
class ThuVien
{
private:
    int soLuongBanDoc;
    BanDoc *DS;

public:
    ThuVien();
    ~ThuVien();
    void Nhap();
    void Xuat();
    friend class BanDoc;
};
