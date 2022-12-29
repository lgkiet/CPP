#pragma once
#include "Sach.h"
#include <string.h>
using namespace std;
class SachGiaoKhoa : public Sach
{
private:
    string MonHoc;
    int Lop;

public:
    SachGiaoKhoa();
    ~SachGiaoKhoa();
    void Nhap();
    void Xuat();
};
