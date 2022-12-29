#pragma once
#include <iostream>
#include "NhanVien.h"
using namespace std;

class CongTy
{
private:
    NhanVien **arr;
    int soLuongNV;

public:
    CongTy();
    ~CongTy();
    void Nhap();
    void Xuat();
};