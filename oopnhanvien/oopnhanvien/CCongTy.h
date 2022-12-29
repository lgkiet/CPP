#pragma once
#include <iostream>
#include <string.h>
#include "CNhanVien.h"
#include "CNhanVienSanXuat.h"
#include "CNhanVienVanPhong.h"

using namespace std;
class CCongTy
{
private:
    int size;
    CNhanVien **DS;

public:
    void Nhap();
    void Xuat();
};