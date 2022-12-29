#pragma once
#include <iostream>
#include <string.h>
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